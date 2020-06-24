int R=9,B=10,G=11;
void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(R,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  delay(333);
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,HIGH);
  delay(333);
  digitalWrite(R,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(B,HIGH);
  delay(333);
  digitalWrite(R,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  delay(333);
  digitalWrite(R,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,LOW);
  delay(333);
  digitalWrite(R,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(B,LOW);
  delay(333);
  // put your main code here, to run repeatedly:

}
