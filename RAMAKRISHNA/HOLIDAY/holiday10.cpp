#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[20],b[20],i,n,m;
	cout << "enter the size of the first array:";
	cin >> m;
	cout << "\n";
	cout << "enter the numbers of first array:";
	for(i=0;i<m;i++)
	{
		cin >> a[i];
	}
	cout << "\n";
	cout << "enter the size of the second array:";
	cin >> n;
	cout << "\n";
	cout << "enter the numbers of second array:";
	for(i=0;i<n;i++)
	{
		cin >> b[i];
	}
	for(i=m;i<m+n;i++)
	{
		a[i] = b[i-m];
	}
	cout << "\n";
	for(i=0;i<m+n;i++)
	{
		cout << a[i];
	}
	return 0;
}
			
		
