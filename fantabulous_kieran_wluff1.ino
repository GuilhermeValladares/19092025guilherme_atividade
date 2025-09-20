// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s) ligado
  digitalWrite(9, LOW);
  delay(1000); // Aguarde 1000 millisecond(s) desligado
  
  digitalWrite(10, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s) ligado
  digitalWrite(10, LOW);
  delay(1000); // Aguarde 1000 millisecond(s) desligado
  
  digitalWrite(11, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s) ligado
  digitalWrite(11, LOW);
  delay(1000); // Aguarde 1000 millisecond(s) desligado
}