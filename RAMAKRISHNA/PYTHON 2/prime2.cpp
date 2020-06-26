#include <iostream>
using namespace std;
int main()
{
	int i,j,r,temp,n;
	cout <<"list of prime numbers\n";
	cout <<"enter the number:\n";
	cin  >> n;
	cout <<"\n";
	for(i=1;i<=n;i++)
	{
		int count=0;
		temp=i;
		for(j=1;j<=temp;j++)
		{
			
			r=temp%j;
			if(r==0)
			{
				
				count++;
				
			}
		}
				
		if(count==2)
		{
			cout << i;
			cout <<"\n";
			
			
		}
	}
	
return 0;
}
			
				
			
				
				
				
		
				
			
