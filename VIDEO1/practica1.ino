//Tiene el LED un tiempo de espera de un segundo que esta conectado a una placa arduino con una resistencia de 20 ohnios
 
void setup()
{
pinMode (LED_BUITIN, OUTPUT);
}

void loop ()
{ 
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000); //Wait for 1000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000); //Wait for 1000 millisecond(s)
}