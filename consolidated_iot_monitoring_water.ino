//https://thingspeak.com/channels/406672

#include <ESP8266WiFi.h>
 
String apiKey = "IDSGK5F3M9MJTFPR";     //  Enter your Write API key from ThingSpeak

const char *ssid =  "TP-Link_F5FE";     // replace with your wifi ssid and wpa2 key
const char *pass =  "38003189";
const char* server = "api.thingspeak.com";
int digitalSoil = D4;
int analogSoil = A0;
int relayPump = D5;

/*
Soil Moisture 
when kept in open value is 1020 or above 
when kept in water dense soil its around 350 / 400
when in water scarce soil its 700
so threshold is 650
*/

int moisture=9;
int moisture_threshold=650;
WiFiClient client;
void postThingspeak(){
if (client.connect(server,80)){     //   "184.106.153.149" or api.thingspeak.com
    String postStr = apiKey;
     postStr +="&field1=";
     postStr += String(moisture);
     postStr += "\r\n\r\n";
     client.print("POST /update HTTP/1.1\n");
     client.print("Host: api.thingspeak.com\n");
     client.print("Connection: close\n");
     client.print("X-THINGSPEAKAPIKEY: "+apiKey+"\n");
     client.print("Content-Type: application/x-www-form-urlencoded\n");
     client.print("Content-Length: ");
     client.print(postStr.length());
     client.print("\n\n");
     client.print(postStr);
     Serial.print("Thingspeak Moisture: ");
     Serial.print(moisture);
     Serial.println("%. Send to Thingspeak.");
}
    client.stop();
}

void postThingspeakMotor(){
if (client.connect(server,80)){     //   "184.106.153.149" or api.thingspeak.com
    String postStr = apiKey;
     postStr +="&field1=";
     postStr += String(moisture);
     postStr +="&field2=";
     postStr += String("1");
     postStr += "\r\n\r\n";
     client.print("POST /update HTTP/1.1\n");
     client.print("Host: api.thingspeak.com\n");
     client.print("Connection: close\n");
     client.print("X-THINGSPEAKAPIKEY: "+apiKey+"\n");
     client.print("Content-Type: application/x-www-form-urlencoded\n");
     client.print("Content-Length: ");
     client.print(postStr.length());
     client.print("\n\n");
     client.print(postStr);
     //Serial.print("Moisture: ");
//     Serial.print(moisture);
 Serial.println("Motors Send to Thingspeak.");
}
    client.stop();
}


 
void setup(){
Serial.begin(115200);
delay(10);
Serial.println("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, pass);
pinMode(digitalSoil,INPUT);
pinMode(relayPump,OUTPUT); 
while (WiFi.status() != WL_CONNECTED){
delay(500);
Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected");
}

void loop() {
int dig_soil_value = digitalRead(digitalSoil);
int analog_soil_val = analogRead(analogSoil);
moisture = analog_soil_val;
Serial.print("Moisture Level : ");
Serial.println(moisture);
  if(moisture > moisture_threshold  ){
    Serial.println("Motor On");
    postThingspeakMotor();
    digitalWrite(relayPump,HIGH) ;      
    delay(10000);
  }
  else{
    Serial.println("Motor Off");
    digitalWrite(relayPump,LOW) ;      
    
  }
 // thingspeak needs minimum 15 sec delay between updates, i've set it to 30 seconds
  postThingspeak();
  Serial.println("Waiting...");
  delay(10000);
}
