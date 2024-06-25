void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// int i =0;
for(int i=0;i<255;i++)
{
 analogWrite(6,i);
 analogWrite(5,i);
 analogWrite(3,i);
 delay(10);
}
for(int i=255;i>0;i--)
{
  analogWrite(6,i);
  analogWrite(5,i);
  analogWrite(3,i);
  delay(10);

}

}
