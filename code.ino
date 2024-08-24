#include <ESP8266WiFi.h>
#include <DHT.h>

#define WIFI_SSID "---"
#define WIFI_PASSWORD "---"
#define DHTPIN D6
#define DHTTYPE DHT11
#define SOIL_MOISTURE_PIN A0
#define THINGSPEAK_API_KEY "---"

DHT dht(DHTPIN, DHTTYPE);
WiFiClient client;

const char *server = "api.thingspeak.com";
const int serverPort = 80;

void setup() {
  Serial.begin(115200);
  delay(10);

  connectToWiFi();
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int soilMoisture = analogRead(SOIL_MOISTURE_PIN);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read data from DHT sensor!");
    delay(2000);
    return;
  }

  int soilMoisturePercent = map(soilMoisture, 730, 300, 0, 100);

  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Humidity %: ");
  Serial.println(humidity);
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoisture);
  Serial.print("Soil Moisture %: ");
  Serial.println(soilMoisturePercent);

  sendDataToThingSpeak(temperature, humidity, soilMoisturePercent);

  delay(5000);
}

// Function to connect to WiFi
void connectToWiFi() {
  Serial.print("Connecting to WiFi...");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: " + WiFi.localIP().toString());
}

// Function to send data to ThingSpeak server
void sendDataToThingSpeak(float temperature, float humidity, int soilMoisturePercent) {
  if (client.connect(server, serverPort)) {
    String url = "/update?api_key=" + String(THINGSPEAK_API_KEY) +
                 "&field2=" + String(temperature) +
                 "&field3=" + String(humidity) +
                 "&field1=" + String(soilMoisturePercent);

    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                 "Host: " + server + "\r\n" +
                 "Connection: close\r\n\r\n");

    Serial.println("Sending data to ThingSpeak...");

    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
      }
    }

    client.stop();
    Serial.println("Data sent to ThingSpeak");
  } else {
    Serial.println("Failed to connect to ThingSpeak");
  }
}
