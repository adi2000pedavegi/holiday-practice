#include <iostream>
using namespace std;
int main()
{
	int n,r,i,temp;
	cout << "enter the number:";
	cin >> n;
	for(i=0;i<n+5;i++)
	{
		int rev=0;
		temp=i;
		while(temp>0)
		{
			r=temp%10;
			rev=(rev*10) + r;
			temp=temp/10;
		}
		if(rev==i)
		{
			if(n-i<=5)
			{
				cout << i;
				cout << "\n";
			}
		}
				
			
	
		
	}
	return 0;
}
				
		
	
		
		
		
	
			
			
