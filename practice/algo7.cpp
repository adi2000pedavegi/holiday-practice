#include <iostream>
using namespace std;
/*Code for counting number of prime numbers in a number(prime number)*/
int main()
{
	int n;
	int count = 0;
	cout << "Enter the number:";
	cin >> n;
	int temp = n;
	while(temp!=0)
	{
		int r;
		r = temp%10; /*Obtaining each digit in each place by dividing with 10*/
		temp = temp/10;/*Updating the number(quotient) by dividing with 10*/
		/*Out of the digits from 0 to 9 2,3,5,7 are only the prime digits(so equating the digits to only those number*/
		if(r==2 || r==3 || r==5 || r==7)
		{
			count++;
		}
	}
	cout << "Number of prime digits appeared in the given number are:";
	cout << "\n";
	cout << count;
	return 0;
}

		
	 
