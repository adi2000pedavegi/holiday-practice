#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,n,a[20],p,k;
	cout << "enter the size of the array:";
	cin >> n;
	cout << "\n";
	cout << "enter the elements:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "\n";
	cout << "enter the position u want to enter:";
	cin >> p;
	cout << "\n";
	cout << "enter the value u want to enter:";
	cin >> k;
	cout << "\n";
	for(i=n-1;i>=p-1;i--)
	{
		a[i+1] = a[i];
	}
	a[p-1] = k;
	for(i=0;i<=n;i++)
	{
		cout << a[i];
	}
	return 0;
}
			
		
		
