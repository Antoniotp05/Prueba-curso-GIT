char valor;
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //comportamiento de los pines con pinmode();
}

void loop()
{
  if(Serial.available()){
  valor = Serial.read();
  Serial.println(valor); 
    if(valor == 'p'){
    EncenderTodos(1000);
    }
    if(valor == 'w'){
      ApagarTodos(1000);
    }
    if(valor== 'v'){
     EncenderTodos(1000);
     ApagarTodos(1000); 
     EncenderTodos(1000);
     ApagarTodos(1000);
    }
  } 
}

void EncenderTodos (int tiempo){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
 delay(tiempo);
}  
void ApagarTodos(int tiempo) {
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(tiempo); } 
