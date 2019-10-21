void setup()
{
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(A0,INPUT);
   
}

void loop()
  
{
  int dist;
  analogRead(A0);
  if(dist<100)
  {
    digitalWrite(3, HIGH);
  delayMicroseconds(10);
  }
  else
  {
  digitalWrite(2,HIGH);
  delayMicroseconds(20); // Wait for 1000 millisecond(s)
  }}