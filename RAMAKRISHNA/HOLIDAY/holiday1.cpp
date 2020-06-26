#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,i,j,temp;
	int k[100],l[100],z[100];
	cout << "enter the numbers:";
	cin >> a;
	cin >> b;
	cin >> c;
	for(i=a;i<=b;i++)
	{
		k[i-a] = i;
		cout << k[i-a];
		
		cout << "\n";
	}
	for(j=0;j<=(b-a+1);j++)
	{
		temp = k[j];
		int r,rev=0;
		while(temp>0)
		{
			r = temp%10;
			rev = (rev*10) + r;
			temp = temp/10;
		}
		l[j] = rev;
	}
	for(j=0;j<=(b-a);j++)
	{
		cout << l[j];
		cout << "\n";
	}
	cout << "\n";
	for(j=0;j<(b-a);j++)
	{
		z[j] = (k[j]-l[j]);
		if(z[j]%c == 0)
		{
			cout <<  k[j];
		}
		cout << "\n";
	}
	return 0;
}
			
		
		
			
			
		
	
			
			
			
			
			
			
			
			
		
	
		
		
