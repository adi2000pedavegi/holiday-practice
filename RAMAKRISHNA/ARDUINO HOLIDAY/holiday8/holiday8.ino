int vr = A0;
int result = 0;
float regv;
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);

}

void loop() {
  result = analogRead(vr);
  regv = (result*5.0)/1023.0;
  Serial.println(regv);
  Serial.println(result);
  delay(1000);
  // put your main code here, to run repeatedly:

}
