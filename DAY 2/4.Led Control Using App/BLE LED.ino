int ledpin=16;
void setup()  
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}
void loop() 
{
   while (Serial.available() > 0) {
    delay(10);
       char inBufferserial = Serial.read();
       Serial.println(inBufferserial);
       if(inBufferserial=='O')
       {
        digitalWrite(ledpin, LOW);
       }
       else if(inBufferserial=='F')
       {
        digitalWrite(ledpin,HIGH);
       }
   }
   delay(100);
} 