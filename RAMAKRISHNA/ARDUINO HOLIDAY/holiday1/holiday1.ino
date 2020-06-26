int d = 14;
void setup() {
  double d = 1597862;
  float k = 13.458;
  Serial.begin(9600);
  //Serial.println(d);// double data type
  //Serial.println(k);// float data type

}

void loop() {
  int a=0,b=1,c=1;
  int co,cb;
  int p=10,q=2;
  int v,w,x,y,z;
  //Serial.println(a);//local varaible declaration
  //Serial.println(d); // global varaible declaration 
  //co = (a&&b) || (b&&c) || (c&&a);
  //cb = (a&&b) || (!b&&c) || (!c&&a);
  w = (p&q);
  v = (p|q);
  x = (p^q);
  y = (~p);
  z = p >>  q;
  
  //Serial.println(co);
  //Serial.println(cb);
  Serial.println(v);
  Serial.println(w);
  Serial.println(x);
  Serial.println(y);
  Serial.println(z);
  delay(100000);
  
  

}
