void setup()
{
// no es necesario definir puertos de salida con la instruvvión analogWrite
}

void loop()
{
for(int i=0;i<=255;i++)
{
  analogWrite(11,i);
  analogWrite(10,i);
  analogWrite(9,i);
  delay(9);
 }
  
for(int i=255;i>=0;i--)
  {
    analogWrite(11,i);
    analogWrite(10,i);
    analogWrite(9,i);
    delay(9);
  }
}