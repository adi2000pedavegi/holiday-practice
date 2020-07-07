#include <iostream>
#include <bits/stdc++.h>
/*Performing Negation operation(positive to negative) for K times such that the sum will be maximum*/
/*For that we need to do that for every minimum value so that it maximizes the sum*/
using namespace std;
int main()
{
	int a[20],n,i,k,j;
	/*Atmost maximum value possible in the int datatype*/
	/*Similarly INT_MIN for atmost minimum value possible in the int datatype*/
	cout << "Enter the size of the array:";
	cout << "\n";
	cin >> n;
	cout << "Enter the elements of the array:";
	cout << "\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "Enter the number of operations to be done:";
	cin >> k;
	cout << "\n";
	for(j=0;j<k;j++)
	{
		int index=-1;
		int min = INT_MAX;
		for(i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min = a[i];
				index = i;
			}
		}
		a[index] = -a[index];
	}
	int sum1 = 0;
	for(i=0;i<n;i++)
	{
		sum1 = sum1 + a[i];
	}
	cout << sum1;
	return 0;
}

	
				
			
		
	
