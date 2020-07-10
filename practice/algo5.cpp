#include <iostream>
#include <math.h>
/*To identify a number is fibonacci or not*/
/*For a number N to fibonacci either 5N^2 + 4 or 5N^2 - 4 is a perfect square*/
using namespace std;
int main()
{
	int n,ar[20],i;
	float a,b;
	cout << "Number of test cases:";
	cin >> n;
	cout << "Enter the numbers:";
	for(i=0;i<n;i++)
	{
		cin >> ar[i];
	}
	for(i=0;i<n;i++)
	{
		a = pow((5*ar[i]*ar[i])+4,0.5);
		b = pow((5*ar[i]*ar[i])-4,0.5);
		if(a-floor(a)==0 || b-floor(b)==0)
		{
			cout << "The number is fibonacci";
			
		}
		else
		{
			cout << "The number is not fibonacci";
			
		}
		cout << "\n";
	}
	return 0;
}
