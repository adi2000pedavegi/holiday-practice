#include <iostream>
using namespace std;
int main()
{
	int n,i,a[10],t;
	cout << "enter the number:";
	cin >> n;
	for(t=0;t<=n/2;t++)
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
			
			
			
			
