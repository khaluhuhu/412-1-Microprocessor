// C++ code
// LED BLINKING
void setup()
{
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val;
  for (val = 0;val<254;val++)
  {
  val = analogRead(A3);
  analogWrite(7, val);
  delay(500); // Wait for 1000 millisecond(s)
    Serial.println(val);
  }
  delay(100);
  for (val =255;val>=0;val--)
  {
    analogWrite(7, val);
    delay(100); // Wait for 1000 millisecond(s)
    Serial.println(val);
  }
}