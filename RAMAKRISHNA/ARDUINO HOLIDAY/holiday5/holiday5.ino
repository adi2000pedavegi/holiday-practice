#include <String.h>

void setup() {
  char adi[] = "Aditya Ramakrishna";
  char s1[] = "Aditya";
  char s2[] = "Ramakrishna";
  char s3[40];
  
  Serial.begin(9600);
  //Serial.println(adi);
  //Serial.println(adi[8]);
  adi[6] = 0;
  //Serial.println(adi);
  adi[18] = ' ';
  adi[19] = 'B';
  adi[20] = 'F';
  //Serial.println(adi);
  Serial.println(strlen(s1));
  Serial.println(sizeof(s1));
  strcat(s1,s2);
  Serial.println(s1);
  //strcat(s2,s1);
  //Serial.println(s2);
  //strcpy(s3,s1);
  //Serial.println(s3);
  
  delay(1000);
    
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
