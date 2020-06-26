#include <iostream>
using namespace std;
int main()
{
	int n,i,r,j;
	cout <<"enter the number\n";
	cin >> n;
	for(i=1;i<n;i++)
	{
		int sum=0;
		
		for(j=1;j<=i;j++)
		{
			r=i%j;
			if(r==0)
			{
				sum=sum+j;
			}
		}
		if(sum==2*i)
		{
			cout << i;
			cout <<"\n";
		}
	}
	return 0;
}
				
			
	
			
					
			
			
