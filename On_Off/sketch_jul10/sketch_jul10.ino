void setup()
{
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

}

const int blinkSpeed = 500;

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED, HIGH);  // turn the LED on 
  delay(blinkSpeed);  // wait for a second
  digitalWrite(RED_LED, LOW);  // turn the LED off
  //delay(1000);  // wait for a second
  
  digitalWrite(GREEN_LED, HIGH);
  delay(blinkSpeed);
  digitalWrite(GREEN_LED, LOW);
  //delay(1000);
  
  
}
