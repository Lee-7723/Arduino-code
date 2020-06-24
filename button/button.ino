/*int led=13,button=8;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(button,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(button)==HIGH)digitalWrite(led,LOW);
if(digitalRead(button)==LOW)digitalWrite(led,HIGH);
}
*/
int led=13,button=8;
bool ledstate=true;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(button,INPUT_PULLUP);
}
void loop() {
  for(;digitalRead(button)==HIGH;){}
 
  // 当按键按下时，点亮或熄灭LED
  if(ledstate==true)
  {
    digitalWrite(led,LOW);
    ledstate=!ledstate;
  }
  else
  {
    digitalWrite(led,HIGH);
    ledstate=!ledstate;
  }
  delay(350);
  
}
