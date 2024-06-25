void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(5,HIGH);
delay(45000);

digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
delay(20000);

digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(7,LOW);
delay(3000);






}
