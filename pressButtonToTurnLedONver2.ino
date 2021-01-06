//This version will use library Bounce2 that you can download at https://github.com/thomasfredericks/Bounce2
#include <Bounce2.h>
int inputPin = 5;
int ledPin = 4;
int ledState = 0;
Bounce button = Bounce(inputPin, 5); //This setup a bouncer object is button for the pin with period debouncing of 5 miliseconds 

void setup()
{
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(inputPin, HIGH);
}

void loop()
{
  if (button.update() && button.read() == LOW)/*The function update returns true if something has changed 
  with the bouncer object and the second part of the condition checks whether the button went LOW */
  {
    ledState = ! ledState;
    digitalWrite(ledPin, ledState);
  }
}
