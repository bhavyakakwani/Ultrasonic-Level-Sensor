int depth = 0; // at what depth the fluid is (in cm)

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(0, LOW);
  depth = 0.01723 * readUltrasonicDistance(1, 1);
  if(depth == 336) // if the level is out of range
  {
    digitalWrite(0, HIGH); // turn ON the buzzer
  }
  delay(100);
}