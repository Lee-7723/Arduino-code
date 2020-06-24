 int val;
 int ledpin=13;
void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
for(int i=12;i<14;i++)
{
digitalWrite(i,HIGH);
delay(50);
digitalWrite(i,LOW);
}
}
