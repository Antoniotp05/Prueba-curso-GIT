int tiempo=150;
int pin;
void setup()
{
for (pin=8; pin<=12; pin++)
 {
  pinMode (pin,OUTPUT);
  }
}

void loop()
{
for (pin=8; pin<=12; pin++)
 {
  digitalWrite (pin,HIGH);
  delay (tiempo); 
  digitalWrite (pin,LOW);
  delay (tiempo);
  }
} 