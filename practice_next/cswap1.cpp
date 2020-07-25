#include <iostream>
using namespace std;
/*perfroming swap between two numbers without using another variable*/
int main()
{
	int a,b;
	cout << "Enter the numbers";
	cin >> a;
	cin >> b;
	cout << "\n";
	cout << a ; 
	cout << "\n";
	cout << b;
	cout << "\n";
	cout << "After swaping the numbers";
	a = a+b;
	b = a-b;
	a = a-b;
	cout << "\n";
	cout << a;
	cout << "\n";
	cout << b;
	return 0;
}

	
	
