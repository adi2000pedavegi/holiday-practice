#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[100],b[100],i,size,sum=0;
	cout <<"enter the binary code\n";
	cout <<"enter the size of array\n";
	cin >> size;
	for(i=0;i<=size;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<=size;i++)
	{
		b[i]=a[size-i];
		cout << b[i];
		cout <<"\n";
	}
	for(i=0;i<=size;i++)
	{
		sum=sum+(pow(2,i))*(b[i]);
	}
	cout << sum;
	cout <<"\n";	
		
	return 0;
}		
			
		
