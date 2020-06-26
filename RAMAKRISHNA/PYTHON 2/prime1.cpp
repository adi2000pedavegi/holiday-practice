#include <iostream>
using namespace std;
int main()
{
	int n,r,i,count=0;
	cout <<"enter the number\n";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		r=n%i;
	    if(r==0)
	    {
			cout << i;
			cout <<"factor of number\n";
			
			cout <<"\n";
			count++;
		}
		
		
		
		
	}
	
	
	cout <<"\n";
	cout << count;
	cout <<"\n";
	if(count==2)
	{
		cout <<"prime number\n";
	}
	else
	{
		cout <<"composite number\n";
	}
			
	
	return 0;
}
					 	
		

