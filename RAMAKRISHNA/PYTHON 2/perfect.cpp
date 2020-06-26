#include <iostream>
using namespace std;
int main()
{
	int n,r,i,sum=0;
	cout <<"enter the number\n";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		r=n%i;
		
		
		
		if(r==0)
		{
			sum=sum+i;
			
		}
		
		
	}
	cout << sum;
	cout <<"\n";
	if(sum==2*n)
	{
		cout <<"perfect number\n";
	}
	else
	{
		cout <<"not a perfect number\n";
	}
			
return 0;
}			
		
