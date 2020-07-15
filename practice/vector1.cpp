#include <cstdlib>
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

int main()
{
	int n,i;
	cout << "Enter the size of vector:";
	cin >> n;
	vector<int> a(n);
	cout << "Enter the elements of the vector";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		cout << a[i];
		cout << "\n";
	}
	cout << "Length of the vector:";
	cout << a.size();
	return 0;
}

