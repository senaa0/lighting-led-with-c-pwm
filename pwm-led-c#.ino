int data,pwm; 
void setup() {
  Serial.begin(9600);

}
void loop() {
  if(Serial.available()>0)
  {
    data=Serial.read();
    if(data>0)
    {
      pwm=data-1;
    }
  }
analogWrite(9,pwm);
}