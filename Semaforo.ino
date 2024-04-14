// C++ code
//
void setup() 
  {

  pinMode(13,OUTPUT);// Led vermelho
  pinMode(12, OUTPUT);// Led amarelo
  pinMode(11,OUTPUT);//Led verde
}

void loop()
{
  digitalWrite(13, HIGH);//Liga o led vermelho
  delay(5000);// 5000 milliseconds
  digitalWrite(13, LOW);//Desliga o led vermelho
               
  digitalWrite(12, HIGH);//Liga o led amarelo
  delay(3000);//3000 milliseconds
  digitalWrite(12, LOW);//Desliga o led amarelo
               
  digitalWrite(11, HIGH);//Liga o led verde
  delay(7000);//7000 milliseconds
  digitalWrite(11, LOW);//Desliga o led verde
 }
 