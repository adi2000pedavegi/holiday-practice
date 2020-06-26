#include <iostream>
using namespace std;
int main()
{
	int a[10],i,n,*p[10];
	cout << "enter the size of the array:";
	cin >> n;
	cout << "\n";
	cout << "enter the elements of the array:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "\n";
	for(i=0;i<n;i++)
	{
		p[i] = &a[n-1-i];      //returns in reverse direction
		cout << *p[i];         //returns as same as if it is equal to i
		cout << "\n";
	}
	return 0;
}
	
		
	
