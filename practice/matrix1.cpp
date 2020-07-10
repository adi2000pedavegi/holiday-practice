#include <iostream>
using namespace std;
int main()
{
	int n,i,j,a[10][10];
	cout << "Enter the size of the square matrix:";
	cin >> n;
	cout << "Enter the elements of the square matrix:";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
		
	}
	cout << "The actual matrix";
	cout << "\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << a[i][j];
			cout << "\t";
		}
		cout << "\n";
	}
	/*Create a new array and also can be stored into it this is just displaying the result*/
	cout << "\n";
	cout << "The transposed matrix";
	cout << "\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << a[j][i];
			cout << "\t";
		}
		cout << "\n";
	}
	return 0;
}

		
