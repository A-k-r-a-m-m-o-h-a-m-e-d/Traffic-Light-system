// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
   pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(2000); 
 
  digitalWrite(7,HIGH);
  delay(2000);
  digitalWrite(7,LOW);
  delay(750);
   digitalWrite(7,HIGH);
  delay(750);
  digitalWrite(7,LOW); 
  delay(750);
  digitalWrite(7,HIGH);
  delay(750);
  digitalWrite(7,LOW);
  delay(750);
  digitalWrite(7,HIGH);
  delay(750);
  digitalWrite(13,LOW);
  delay(0);
  digitalWrite(7,LOW);
  delay(300);
  digitalWrite(2, HIGH);
   delay(2000);
  digitalWrite(2,LOW);
  delay(1500);
  
  
}