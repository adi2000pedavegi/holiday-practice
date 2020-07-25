#include <iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	
	cout << "Enter the number";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count = count + 1;
		}
	}
	cout << "\n";
	if(count==2)
	{
		cout << "The number is prime number";
	}
	else
	{
		cout << "The number is composite number";
	}
	return 0;
}

	
