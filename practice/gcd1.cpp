#include <iostream>
using namespace std;
/*Finding GcD(greatest common divisor) between two numbers a and b*/
/*The values must sweep to atmost a+b which is the maximum possible value(and both a and b are positive)*/
/*Evaluate the remainder in each case till it reach a+b(both remainders should be 0*/
int main()
{
	int a,b,i,gcd = 0;
	cout << "Enter the numbers:";
	cin >> a;
	cin >> b;
	for(i=1;i<=a+b;i++)
	{
		if((a%i==0) && (b%i==0))
		{
			gcd = i;
		}
	}
	cout << "Greatest common divisor";
	cout << "\n";
	cout << gcd;
	return 0;
}

	
			
