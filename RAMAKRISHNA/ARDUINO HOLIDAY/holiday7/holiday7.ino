int n = 10;
int i;
int aditya(int c)
{
  int f = 1;
  for(i=1;i<=c;i++)
  {
    f = f*i;
  }
  return f;
}
void setup() {
  Serial.begin(9600);
  int a[10] = {32,27,45,78,56,12,45,2,62,20};
  Serial.println(a[2]);
  int sum = 0;
  for(i = 0;i<n;i++)
  {
    sum = sum + a[i];
  }
  Serial.println(sum);
  Serial.println(aditya(6));
}

void loop() {
  // put your main code here, to run repeatedly:

}
