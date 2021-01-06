/* Connect led and button to pin 4 and 5 respectively */
#define ledPin 4
#define inputPin 5
int ledState = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);;
  pinMode(inputPin, INPUT);
  digitalWrite(inputPin, HIGH);
}
void loop()
{
  if (digitalRead(inputPin) == LOW)
  {
    ledState = not ledState;
    digitalWrite(ledPin, ledState);
    delay(500);
  }
}
