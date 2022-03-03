void setup()
 {
  Serial.begin(9600);
  pinMode(8, OUTPUT); 
}
void loop()
 {
  float sensorValue = analogRead(A0);
  float sensoroutinvoltage=(sensorValue/1024)*5;
  Serial.print(sensorValue);
  Serial.print(" 10 bit ADC ");
  Serial.print(sensoroutinvoltage);
  Serial.println(" Voltage");
  //digitalWrite(13, LOW);
 
  if (sensoroutinvoltage < 2.0){
    digitalWrite(8, HIGH);
  }
  else
{
    digitalWrite(8, LOW);
  }
  delay(1000);        
}
