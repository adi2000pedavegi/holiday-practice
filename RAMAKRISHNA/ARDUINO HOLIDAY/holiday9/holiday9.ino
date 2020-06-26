const int light = 7;
const int dswitch = 8;
int state = 0;
void setup() {
  Serial.begin(9600);
  pinMode(light,OUTPUT);
  pinMode(dswitch,INPUT);
  

}

void loop() {
  state = digitalRead(dswitch);
  if(state==HIGH)
  {
    digitalWrite(light,HIGH);
    
  }
  else
  {
    digitalWrite(light,LOW);
  }
  

}
