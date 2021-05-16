int LDR = A0;
int led = 8;
int value =0;
void setup()
{
pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
value = analogRead(LDR);
  if(value<300)
  {
  digitalWrite(led, HIGH);
  }
  else
  {
  digitalWrite(led,LOW);
     }
  Serial.println(value);
  delay(200);
} 
