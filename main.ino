#include <WiFi.h>
#include <SoftwareSerial.h>
#include "ThingSpeak.h"

// WiFi credentials
const char* ssid = "Your_SSID";
const char* password = "Your_PASSWORD";

// ThingSpeak
WiFiClient client;
unsigned long channelID = YOUR_CHANNEL_ID;
const char* writeAPIKey = "YOUR_WRITE_API_KEY";

// Sensor setup
SoftwareSerial pmSerial(16, 17); // RX, TX for PM2.5
SoftwareSerial co2Serial(18, 19); // RX, TX for MH-Z19B

void setup() {
  Serial.begin(115200);
  pmSerial.begin(9600);
  co2Serial.begin(9600);
  WiFi.begin(ssid, password);
  ThingSpeak.begin(client);
}

void loop() {
  int pm25 = readPM25();
  int co2 = readCO2();

  ThingSpeak.setField(1, pm25);
  ThingSpeak.setField(2, co2);
  ThingSpeak.writeFields(channelID, writeAPIKey);
  delay(15000); // Send data every 15 seconds
}

int readPM25() {
  // Dummy value, add actual parser logic for PMS5003
  return 35;
}

int readCO2() {
  // Dummy value, add logic for MH-Z19B
  return 420;
}
