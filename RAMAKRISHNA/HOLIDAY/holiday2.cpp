#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[10][10],b[10][10],i,j,m,n,c[10][10],t[10][10];
	cout << "enter the number of rows of the matrix:";
	cin >> m;
	cout << "\n";
	cout << "enter the number of columns of the matrix:";
	cin >> n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> a[i][j];
			
		}
	}
	cout << "\n";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> b[i][j];
			
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j];
			cout << "\t";
			
		}
		cout << "\n";
	}
	cout << "\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[i][j] = c[j][i];
			cout << t[i][j];
			cout << "\t";
		}
		cout << "\n";
	}
	return 0;
}
			
			
			
			
		
			
			
