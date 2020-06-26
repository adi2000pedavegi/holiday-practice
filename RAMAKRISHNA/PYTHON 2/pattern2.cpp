#include <iostream>
using namespace std;
int main()
{
	int n,a[10],i,t;
	cout << "enter the number ";
	cin >> n;
	for(t=n;t>=0;t--)
	{
		for(i=0;i<n;i++)
		{
			a[i]=n-t;
			cout << a[i];
		}
	     cout << "\n";
	}
	return 0;
}	     		
	

