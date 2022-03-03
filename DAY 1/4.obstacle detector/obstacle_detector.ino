#define trigPin 12
#define echoPin 13
void setup()
{
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(11, OUTPUT);
}
void loop()
{
  float duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
 delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print("Distance  :"); 
  Serial.println(distance);
//delay(1000);

if(distance < 10){
  digitalWrite(11,LOW);
}
else{
  digitalWrite(11,HIGH);
}

}
