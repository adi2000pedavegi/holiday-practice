#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[20],i,n,sum1=0,sum2=0,p,k,b[20];
	cout << "enter the size of the array:";
	cin >> n;
	cout << "\n";
	cout << "enter the elements of the array:";
	
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		cout << "\n";
	}
	cout << "\n";
	for(i=0;i<n;i++)
	{
		sum1=sum1+a[i];
	}
	cout << sum1;
	cout << "\n";
	cout << "enter the position u want to fix:";
	cout << "\n";
	cin >> p;
	cout << "enter the number u want to fix:";
	cin >> k;
	cout << "\n";
	for(i=0;i<p;i++)
	{
		b[i] = a[i];
	}
	b[p] = k;
	for(i=p+1;i<=n;i++)
	{
		b[i] = a[i-1];
	}
	for(i=0;i<=n;i++)
	{
		cout << b[i];
		cout << "\n";
	}
	cout << "\n";
	for(i=0;i<=n;i++)
	{
		sum2=sum2+b[i];
	}
	cout << sum2;
	return 0;
}
		
	
		
		
	
	
		
		
