#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
#define ledpin 11

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
//connect to the row pinouts of the keypad
byte rowPins[ROWS] = {2, 3, 4, 5}; //R1,R2,R3,R4
//connect to the column pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9};//C1,C2,C3,C4

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){

  pinMode(ledpin,OUTPUT);
  
  Serial.begin(9600);
}
  
void loop(){
  char key = keypad.getKey();  
  if (key){
    Serial.print(key);
    Serial.print(" ");

     switch (key)
    {
      case '1':
        digitalWrite(ledpin, HIGH);
        break;
      case '4':
        digitalWrite(ledpin, LOW);
        break;
     
    }
  }
  
}
