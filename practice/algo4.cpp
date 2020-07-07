#include <iostream>
/*Maximizing the sum of i*a[i] just sorting in incerasing order eventually makes larger value and larger eventually gives a maximum sum*/
using namespace std;
int main()
{
	int a[20],n,i,j;
	cout << "Enter the size of the array:";
	cin >> n;
	cout << "Enter the elements of the array:";
	
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "Sorted array:";
	for(i=0;i<n;i++)
	{
		int temp;
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "Sorted array:";
	cout << "\n";
	for(i=0;i<n;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	
	int sum1 = 0;
	for(i=0;i<n;i++)
	{
		sum1 = sum1 + i*a[i];
	}
	cout << sum1;
	return 0;
}

	
			
		
