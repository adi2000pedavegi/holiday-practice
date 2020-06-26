#include <iostream>
using namespace std;
int main()
{
	int a[1000],i,n;
	cout << "fibonacci sequence";
	cout << "\n";
	a[0]=1;
	 a[1]=1;
	cout << "enter the number";
	cout << "\n";
	cin >> n;
	cout << a[0];
	cout << "\t";
	for(i=1;i<n;i++)
	{
		a[i+1]=a[i]+a[i-1];
		
		cout << a[i];
		cout << "\t";
	}
	return 0;
}
	
		
		
		
	
	
