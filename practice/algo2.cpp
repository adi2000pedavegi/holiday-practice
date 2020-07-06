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

int updproduct(int *a,int n)
{
	int updproduct = 1,i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			updproduct = updproduct*a[i];
		}
	}
	return updproduct;
}

int main()
{
	int n,i,a[20],countneg=0,countzero=0;
	int maxneg = INT_MIN;
	
	
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
			maxneg = max(maxneg,a[i]);
		}
		if(a[i]==0)
		{
			countzero++;
		}
		
	}
	if(countneg%2!=0 && countzero==0)
	{
		cout << product(a,n)/maxneg;
	}
	if(countneg%2==0 && countzero!=0)
	{
		cout << updproduct(a,n);
	}
	if(countneg%2!=0 && countzero!=0)
	{
		if(countneg==1)
		{
			cout << 0;
		}
		else
		{
			cout << updproduct(a,n)/maxneg;
		}
	}
	
	if(countneg%2==0 && countzero==0)
	{
		cout << product(a,n);
	}
	
	
	return 0;
}

