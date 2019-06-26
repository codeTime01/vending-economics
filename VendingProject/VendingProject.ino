int buttonOne = 12;
int buttonTwo = 13;
bool buttonValue = HIGH;
bool buttonValueTwo = HIGH;

#include <vending.h>

void setup() {

vending Machine;

}

void loop() {
  
  buttonValue = digitalRead(buttonOne);
  buttonValueTwo = digitalRead(buttonTwo);
  
  if(buttonValue == LOW) {
    Machine vend();
  }
    
  if (buttonValueTwo == LOW) {
    Machine retract();
  }
}
