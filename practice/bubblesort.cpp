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
	
	
	cout << "\n";
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	return 0;
}

