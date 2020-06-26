#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[20],b[20],i,m,n,c[40];
	cout <<  "enter the size of the first array:";
	cin >> m;
	cout << "\n";
	for(i=0;i<m;i++)
	{
		cin >>  a[i];
		
	}
	cout << "enter the size of the second array:";
	cin >> n;
	cout << "\n";
	for(i=0;i<n;i++)
	{
		cin >> b[i];
		
	}
	cout << "\n";
	
	for(i=0;i<m;i++)
	{
		c[i] = a[i];
	}
	for(i=m;i<m+n;i++)
	{
		c[i] = b[i-m];
	}
	for(i=0;i<m+n;i++)
	{
		cout << c[i];
		cout << "\n";
	}
	return 0;
				
}
		
		
		
			
		
