int LedRojo=12;
int LedAzul=11;
int LedNaranja=10;
int tiempo=50;
void setup()
{
 pinMode (LedRojo,OUTPUT);
 pinMode (LedAzul,OUTPUT);
 pinMode (LedNaranja,OUTPUT);
}

void loop()
{
digitalWrite (LedRojo,HIGH) ;
delay (tiempo); 
digitalWrite (LedRojo,LOW) ;
delay (tiempo);  
digitalWrite (LedAzul, HIGH) ;
 delay (tiempo);   
digitalWrite (LedAzul, LOW) ;
delay (tiempo);   
digitalWrite (LedNaranja, HIGH) ;
delay (tiempo); 
digitalWrite (LedNaranja, LOW) ;
delay (tiempo); 
}