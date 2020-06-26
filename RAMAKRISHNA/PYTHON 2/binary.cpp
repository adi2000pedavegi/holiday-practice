#include <iostream>
using namespace std;
int main()
{
	int i,n,a[100],b[100];
	cout <<"enter the number\n";
	cin >> n;
	cout <<"\n";
	while(n>0)
	{
		
		for(i=0;i<=9;i++)
		{
			 a[i]=n%2;
			 n=n/2;
			 
		
		}
		
	}
	
	
	for(i=0;i<=9;i++)
	{
		b[i]=a[9-i];
		cout << b[i];
		
	}
	cout <<"\n";
		
return 0;
}		
