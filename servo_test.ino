#include <Servo.h>
Servo myservo; 
void setup() {
  myservo.attach(D2);
    pinMode(D3,INPUT);

}

void loop() 
{
  int button;
  button=digitalRead(D3);
  // put your main code here, to run repeatedly:
if(button==1)
{
  myservo.write(180);
  delay(15);
 }
else if(button==0)
{
  myservo.write(0);
  delay(15);
}
}
