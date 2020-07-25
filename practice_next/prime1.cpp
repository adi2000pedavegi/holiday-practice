#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	int bigcount = 0;
	cout << "Enter the number:";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			bigcount++;
			cout << i;
			cout << "\n";
		}
		
	}
	cout << "\n";
	cout << "Number of prime numbers till the given number";
	cout << "\n";
	cout << bigcount;
	return 0;
}

				
