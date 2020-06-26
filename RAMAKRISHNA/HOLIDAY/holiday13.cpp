#include <iostream>
using namespace std;
int main()
{
	int a[10],i,n,*p,*q;
	cout << "enter the size of the array:";
	cin >> n;
	cout << "\n";
	cout << "enter the elements of the array:";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "\n";
	p = &a[0];
	while(p<=&a[n-1])
	{
		cout << *p;
		cout << "\n";
		p++;
		
	}
	cout << "\n";
	q = &a[n-1];
	while(q>=&a[0])
	{
		cout << *q;
		cout << "\n";
		q--;
	}
		
	
	return 0;
}
	
		
		
