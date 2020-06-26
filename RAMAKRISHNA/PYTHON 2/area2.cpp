#include <iostream>
#include <math.h>
using namespace std;
int area(int a,int b)
{
	return a*b;
}	
int main()
{
	int l[50],b[50],n,i,j,a[100],x,temp;
	cout << "enter the number of rectangles:";
	cin >> n;
	cout << "\n";
	cout << "enter the length and breadth";
	
	for(i=0;i<n;i++)
	{
		cin >> l[i];
		
		cin >> b[i];
	}	
	cout << "\n";
	for(j=0;j<n;j++)
	{
		a[j] = area(l[j],b[j]);
		cout << a[j];
		cout << "\n";	
	}
	
	temp = a[0];
	for(x=1;x<n;x++)
	{
		if(a[x]>temp)
		{
			temp = a[x];
		}
	}
	cout << temp;
	return 0;
}
			
		
