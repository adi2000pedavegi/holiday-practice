#include <iostream>
using namespace std;
int main()
{
	int i,n,j,temp,x,lower,upper,mid,flag;
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
	cout << "The sorted array\n";
	for(i=0;i<n;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	cout << "Enter the element to be searched:\n";
	cin >> x;
	/*Inializing the lower and upper indexes*/
	lower = 0;
	upper = n-1;
	/*Same as like binary search but the middle value index is not calculated as the middle element of the array*/
	while(flag!=1)
	{
		mid = lower + ((upper-lower)/(a[upper]-a[lower]))*(x-a[lower]);
		if(a[mid]==x)
		{
			flag=1;
		}
		else
		{
			if(a[mid]<x)
			{
				lower = mid + 1;
			}
			else if(a[mid]>x)
			{
				upper = mid - 1;
			}
		}
	}
	if(flag==1)
	{
		cout << "Element found at index:\n"; 
		cout << mid;
	}
	return 0;
}

