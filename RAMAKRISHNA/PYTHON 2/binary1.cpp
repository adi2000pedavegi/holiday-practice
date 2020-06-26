#include <iostream>
using namespace std;
int main()
{
	int i,n,a[100],b[100],size;
	cout <<"enter the number\n";
	cin >> n;
	cout <<"\n";
	cout <<"size of the array bit coding\n";
	cin >> size; 
	while(n>0)
	{
		
		for(i=0;i<=size;i++)
		{
			 a[i]=n%2;
			 n=n/2;
			 
		
		}
		
	}
	
	
	for(i=0;i<=size;i++)
	{
		b[i]=a[size-i];
		cout << b[i];
		
	}
	cout <<"\n";
		
return 0;
}		

