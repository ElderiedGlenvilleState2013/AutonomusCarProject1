// C++ code
//
int backwardPin = 12;
int forwardPin = 11;

void setup()
{
  pinMode(forwardPin, OUTPUT);
  pinMode(backwardPin, OUTPUT);
}

void loop()
{

  
  //Forward
 digitalWrite(forwardPin,LOW);
  digitalWrite(backwardPin,HIGH);
  delay(1000);
  
  //stop
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
  delay(1000);
  
  
  //backward
  digitalWrite(forwardPin,HIGH);
  digitalWrite(backwardPin,LOW);
  delay(1000);
}