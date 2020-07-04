#include <iostream>
using namespace std;
int main()
{
	int i,n,j,k;
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
	cout << "Enter the particular index to be deleted:";
	cin >> k;
	cout << "\n";
	for(j=k+1;j<n;j++)
	{
		a[j-1] = a[j];
	}
	cout << "The final array;";
	for(i=0;i<n-1;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	return 0;
}
		
		
		
	
