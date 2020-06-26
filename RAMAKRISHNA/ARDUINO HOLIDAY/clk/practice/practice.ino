void setup() {
  Serial.begin(9600);
  int n = -25; //stores both positive and negative they are signed integers
  unsigned int m = 25; //stores only positive numbers they are unsigned
  Serial.println(n);
  Serial.println(m);
  char ch1 = 'A'; // it is signed character
  unsigned char ch2 = 'A'; // it is unsigned and gives the ASCII values
  Serial.println(ch1);
  Serial.println(ch2);
  word w = 1000; //stores 16 bit integer value
  long v = 1258; //stores 32 bit integer value
  Serial.println(w);
  Serial.println(v);
  
  
  
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
