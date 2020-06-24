int R=11,B=10,G=9;
void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
// put your setup code here, to run once:

}

void loop() {
  for(int i=0;i<255;i++)
  {
    analogWrite(R,255-i);
    analogWrite(G,i);
    delay(3);
    }
    for(int i=0;i<255;i++)
  {
    analogWrite(G,255-i);
    analogWrite(B,i);
    delay(3);
    }
    for(int i=0;i<255;i++)
  {
    analogWrite(B,255-i);
    analogWrite(R,i);
    delay(3);
    }
  // put your main code here, to run repeatedly:

}
