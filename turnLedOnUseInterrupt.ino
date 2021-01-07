#define ledPin 5
int button = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT_PULLUP); //Setup Pull-up resistor for pin 2
  attachInterrupt(0, turnLedOn, LOW);//Using interrupt 0, call function turnLedOn when press button
}

void loop()
{
  digitalWrite(ledPin, LOW);
}

void turnLedOn()
{
  digitalWrite(ledPin, HIGH);
}
