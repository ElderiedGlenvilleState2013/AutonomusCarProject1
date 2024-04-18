int motorPin = 12;
void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  digitalWrite(motorPin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(motorPin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}