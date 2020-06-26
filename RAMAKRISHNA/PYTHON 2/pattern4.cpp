#include <iostream>
using namespace std;
int main()
{
	int n,i,a[1000],t;
	cout << "enter the number:";
	cin >> n;
	for(t=n/2;t>=0;t--)
	{
		for(i=0;i<n;i++)
		{
			a[i]=n-(2*t);
			cout << a[i];
		}
		cout << "\n";
	}
	return 0;
}
			
			
			
			
