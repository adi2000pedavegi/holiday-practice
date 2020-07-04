#include <iostream>
using namespace std;
int main()
{
	int i,n,l;
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
	cout << "Enter the particular element to be searched:";
	cin >> l;
	cout << "\n";
	for(i=0;i<n;i++)
	{
		if(a[i]==l)
		{
			cout << "The particualar index is:";
			cout << i;
			
		}
		
	}
	return 0;
}

