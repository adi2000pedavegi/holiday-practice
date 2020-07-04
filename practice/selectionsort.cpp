#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,min,temp;
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
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
			
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	
	return 0;
}
