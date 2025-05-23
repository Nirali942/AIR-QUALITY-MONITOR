TASK-4
# 🌍 AIR-QUALITY-MONITOR
IoT Air Quality Monitoring System that measures PM2.5 and CO2 levels, displays live data, and shows historical trends on a cloud dashboard

 📦 Features

- Measures **PM2.5** and **CO2** levels in real-time
- Displays **live metrics** on a cloud dashboard (ThingSpeak or Blynk)
- **Graphs historical trends** for air quality monitoring
- WiFi-enabled with **ESP32 microcontroller**
- Fully portable and suitable for indoor/outdoor deployment

  
🔧 1. Hardware Components
Microcontroller: ESP8266 or ESP32 (WiFi-enabled)

Sensors:

PM2.5 Sensor: PMS5003 or SDS011

CO2 Sensor: MH-Z19B (NDIR CO2 Sensor)

Optional Sensors: DHT11/DHT22 (Temperature & Humidity)

Power Supply: 5V USB or battery

Breadboard & Wires

💻 2. Software & Tools
Arduino IDE (for programming)

Libraries:

SoftwareSerial, Adafruit_Sensor, MQTT, WiFi, ThingSpeak or Blynk libraries

Cloud Dashboard Options:

ThingSpeak (Easy setup, historical graphing)

Blynk (Legacy or IoT) (Mobile and web dashboard)

InfluxDB + Grafana (Advanced trends visualization)

📶 3. Circuit Connections
Example (for ESP32 + PMS5003 + MH-Z19B):

PMS5003:

TX → ESP32 RX

RX → ESP32 TX

VCC → 5V

GND → GND

MH-Z19B:

TX → ESP32 RX2

RX → ESP32 TX2

VCC → 5V

GND → GND


📊 5. Cloud Dashboard
ThingSpeak:

Create a channel

Add Fields for PM2.5 and CO2

Use built-in charts for real-time and historical data

Blynk IoT:

Add widgets: Gauges, Graphs

Configure virtual pins for real-time updates

Grafana:

Push data to InfluxDB and visualize using Grafana


📄 6. Deliverables


Component	Status                        Details

Live Data Display	                     Real-time PM2.5 and CO2 on dashboard

Historical Trends                  	   Graphs showing past data

Hardware	                             Fully functional air quality monitor

Cloud Integration     	               WiFi + ThingSpeak or Blynk

Mobile/Web Dashboard	                  For viewing data anytime/anywhere
