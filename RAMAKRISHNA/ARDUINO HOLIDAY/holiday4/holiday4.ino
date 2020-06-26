int  a = 150;
int  i;
void setup() {
  Serial.begin(9600);

}

void loop() {
  for(i=0;i<=a;i++)
  {
    Serial.println(i);
  }
delay(500);
}
