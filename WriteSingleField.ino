#define SECRET_SSID "TP-Link_F5FE"    // replace MySSID with your WiFi network name
#define SECRET_PASS "38003189"  // replace MyPassword with your WiFi password

#define SECRET_CH_ID 406672     // replace 0000000 with your channel number
#define SECRET_WRITE_APIKEY "ZWK53ZDMQIKCNC66"   // replace XYZ with your channel write API Key

// https://arduino.esp8266.com/stable/package_esp8266com_index.json
//https://thingspeak.com/channels/406672
#include "ThingSpeak.h"
#include <WiFi.h>
#include <ESP8266WiFi.h>;
 #include <WiFiClient.h>;
 #include <ThingSpeak.h>;
char ssid[] = SECRET_SSID;   // your network SSID (name) 
char pass[] = SECRET_PASS;   // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)
WiFiClient  client;

unsigned long myChannelNumber = SECRET_CH_ID;
const char * myWriteAPIKey = SECRET_WRITE_APIKEY;

int number = 0;

void setup() {
  Serial.begin(115200);  //Initialize serial
 //WiFi.mode(WIFI_STA);   
  WiFi.begin(ssid, pass);
  ESP.wdtDisable();
  ESP.wdtEnable(WDTO_8S);
  ThingSpeak.begin(client);  // Initialize ThingSpeak
}

void loop() {
Serial.println("....");
  // Connect or reconnect to WiFi
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(SECRET_SSID);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass); // Connect to WPA/WPA2 network. Change this line if using open or WEP network
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }

  // Write to ThingSpeak. There are up to 8 fields in a channel, allowing you to store up to 8 different
  // pieces of information in a channel.  Here, we write to field 1.
  int x = ThingSpeak.writeField(myChannelNumber, 1, number, myWriteAPIKey);
  if(x == 200){
    Serial.println("Channel update successful.");
  }
  else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }
  
  // change the value
  number++;
  if(number > 99){
    number = 0;
  }
 ESP.wdtFeed(); 
  delay(20000); // Wait 20 seconds to update the channel again
}
