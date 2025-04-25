int tiempo = 500;
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //comportamiento de los pines con pinmode();
}

void loop()
{
 EncerderTodos();
  delay(tiempo);
    ApagarTodos();
  delay(tiempo);
}

void EncerderTodos (){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
 
}  
void ApagarTodos() {
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}