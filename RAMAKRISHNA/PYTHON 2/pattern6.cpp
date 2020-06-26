#include <iostream>
using namespace std;
int main()
{
	int n,a[1000],i,j;
	cout << "enter the number:";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			a[j]=i;
			cout << a[j];
		}
		cout << "\n";
	}
	return 0;
}			
			
