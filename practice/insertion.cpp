#include <iostream>
using namespace std;
int main()
{
	int i,n,j,l,k;
	cout << "Enter the size of the array:";
	cin >> n;
	cout << "\n";
	cout << "Enter the elements:";
	int a[n+1];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		
	}
	cout << "\n";
	cout << "Enter the index of insertion:";
	cin >> k;
	cout << "\n";
	cout << "Enter the number to be inserted:";
	cin >> l;
	cout << "\n";
	for(j=n+1;j>=k;j--)
	{
		
		a[j] = a[j-1];
	}
	a[k] = l;
	cout << "The final array;";
	for(i=0;i<n+1;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	return 0;
}

		
	
	
	
	
