int led[]={13,11,10};
int tiem=20;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int pin=0; pin<=2; pin++)
    {
      for(int i=0; i<=255; i++)
      {
        analogWrite(led[pin],i);
        delay(tiem);
      }
      for(int i=255; i>=0; i--)
      {
        analogWrite(led[pin],i);
        delay(tiem);
      }
    }
}
