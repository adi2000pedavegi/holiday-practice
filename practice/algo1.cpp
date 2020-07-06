#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int product(int *a,int n)
{
	int product = 1,i;
	for(i=0;i<n;i++)
	{
		product = product*a[i];
	}
	return product;
}

int main()
{
	int n,i,a[20],countneg=0,countzero=0;
	/*In-built commands*/
	int maxneg = INT_MIN;
	int minpos = INT_MAX;
	cout << "Enter the size of the array:\n";
	cin >> n;
	cout << "Enter the elements of the array:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			countneg++;
			maxneg = max(maxneg,a[i]);  /*Keep tracking the maximum negative value everywhere*/
		}
		if(a[i]==0)
		{
			countzero++;
		}
		if(a[i]>0)
		{
			minpos = min(minpos,a[i]);  /*Keep tracking the minimum positive value everywhere*/
		}
		
	}
	if(countneg%2!=0 && countzero==0)
	{
		cout << product(a,n);
	}
	if(countneg==0 && countzero!=0)
	{
		cout << 0;
	}
	if(countneg%2==0 && countzero==0)
	{
		cout << product(a,n)*(1/maxneg);
	}
	if(countneg==0 && countzero==0)
	{
		cout << minpos;
	}
	
	
	return 0;
}

