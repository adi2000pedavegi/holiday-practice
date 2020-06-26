#include <iostream>
using namespace std;
int main()
{
	int a[10],n,i,*p,*q;
	cout << "enter the size of the array";
	cin >> n;
	cout << "\n";
	cout << "enter the elements of the array";
	cout << "\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "\n";
	p = &a[0];
	for(i=0;i<n;i++)
	{
		cout << *p;
		cout << "\n";
		p++;
	}
	cout << "\n";
	q = &a[n-1];
	for(i=n-1;i>=0;i--)
	{
		cout << *q;
		cout << "\n";
		q--;
	}
	return 0;
}
		
	
	
	
		
		
