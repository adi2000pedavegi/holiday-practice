int light = 9; 
int bright = 0; 
int fade = 5; 


void setup() {
   Serial.begin(9600);
   pinMode(light, OUTPUT);
}



void loop() {
   
   analogWrite(light, bright);
   
   bright = bright + fade;
   
   if (bright == 0 || bright == 255) {
      fade = -fade ;
   }
   // wait for 30 milliseconds to see the dimming effect
   delay(300);
}
