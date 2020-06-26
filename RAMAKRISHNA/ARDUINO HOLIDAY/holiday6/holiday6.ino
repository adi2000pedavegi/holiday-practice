void setup() {
  Serial.begin(9600);
  String s1[] = "Aditya is";
  char s2[] = "Ramakrishna";
  s1.toUpperCase();
  s1.length();
  s1.replace("is","and");
  Serial.println(s1);
  delayMicroseconds(1000000);s
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
