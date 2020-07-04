#include <iostream>
using namespace std;
int main()
{
	int i,n,j,temp;
	cout << "Enter the size of the array:";
	cin >> n;
	cout << "\n";
	cout << "Enter the elements:";
	int a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		
	}
	
	for(i=1;i<n;i++)
	{
		temp = a[i];
		j = i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = temp;
	}
	for(i=0;i<n;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	return 0;
}
