void setup()
{
  //Set Mode of the  Timer
  TCCR1B |= (1<<WGM12);
  TCCR1B &= (~(1<<WGM13));
  TCCR1A |= (1<<WGM10) | (1<<WGM11); // Fast PWM 10 - Bit

  //Set the PWM Mode
  TCCR1A |= (1<<COM1A1);
  TCCR1A &= (~(1<<COM1A0)); // PWM in Non Inverting Mode

  //Set the Prescaler for the Timer for Setting PWM Frequency
  //Frequency of PWM = 16MHz /64 = 250KHz
  TCCR1B |=  (1<<CS10) | (1<<CS11);
  TCCR1B &=  (~(1<<CS12)); // Prescaler = 64

  //Configure the Output Compare Pin as Output
  DDRB |= (1<<DDB1);
}
int i = 0;
void loop()
{
  for(i=0;i<1024;i++)
  {
    OCR1A = i;
    delay(2);
  }
  delay(2000);
  for(i=1024;i>0;i--)
  {
    OCR1A = i;
    delay(2);
  }
  delay(2000);
}
