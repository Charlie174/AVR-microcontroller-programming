// B (digital pin 8 to 13)
// C (analog input pins)
// D (digital pins 0 to 7)

void setup() {
  // put your setup code here, to run once:
  DDRD = B11111100;
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
  
  PORTD = B10000000;
  delay(50);

  PORTD = B00000000;

}
