/* PWM-Controlled-Drive
 by Anton Gladyshev
 source https://github.com/Areso/Arduino-PWM-Controlled-Drive/
 last modified 2016-04-10
*/
 int x = 128;
 
void setup() {
  // put your setup code here, to run once:
 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (x < 255) 
  {
    x = x +1;
  }
  else
  {
    x = 128;
  }
  analogWrite(9, x);
  delay(500);
}
