void setup() {
  Serial.begin(9600);
  int a=10,b=20;
  int c,d,e,f,g;
  c = a+b;
  d = a-b;
  e = a*b;
  f = a/b;
  g = b%a;
  Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
  Serial.println(e);
  Serial.println(f);
  Serial.println(g);
  

}
int f = 1;
void loop() {
  f ++; // just increment statement
  f = f +10; //updates the statement
  Serial.println(f);
  delay(3000);
  // put your main code here, to run repeatedly:

}
