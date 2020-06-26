int a = 10;
int b = 10;
void setup() {
  Serial.begin(9600);
  

}

void loop() {
  if(a > b)
  {
    a++;
    Serial.println(a);
    
  }
  else if (a = b)
  {
    b++;
    Serial.println(b);
    
    
  }
  else
  {
    a = a + b;
    Serial.println(a);
  }
  delay(3000);
}
