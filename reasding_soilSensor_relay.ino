void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(D4,INPUT);
pinMode(D5,OUTPUT);
/*digitalWrite(D5,HIGH);
delay(50000);*/

}

void loop() {
  // put your main code here, to run repeatedly:
delay(400);
Serial.println(digitalRead(D4));
Serial.println(analogRead(A0));
#//digitalWrite(D5,HIGH);
delay(500);
//digitalWrite(D5,LOW);

}
