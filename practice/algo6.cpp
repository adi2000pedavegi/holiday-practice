#include <iostream>
#include <math.h>
/*Greatest N digit number divisble by N*/
/*This is obtained by evaluating the maximum value(10^N-1) and subracting this from the obtained remainder thus making it divisible*/
using namespace std;
int main()
{
	int i,n,a[10];
	int b;
	cout << "Enter the number of test cases:";
	cin >> n;
	cout << "Enter the numbers:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		int temp;
		temp = (pow(10,a[i]))-1;
		b = temp -(temp%a[i]);
		cout << b;
		cout << "\n";
	}
	cout << "Other simple test cases";
	/*Similarly for largest K digit number divisble by X*/
	int x1,k1,ans1,temp1;
	int x2,k2,ans2,temp2;
	cin >> x1;
	cin >> x2;
	cin >> k1;
	cin >> k2;
	temp1 = (pow(10,k1))-1;
	temp2 = (pow(10,k2))-1;
	ans1 = temp1-(temp1%x1);
	ans2 = temp2-(temp2%x2);
	cout << ans1;
	cout << "\n";
	cout << ans2;
	return 0;
}
	
	 
