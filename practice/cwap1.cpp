#include <iostream>
using namespace std;

void swap(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a;
	cout << "\n";
	cout << b;
	
}

int main()
{
	int a,b;
	cout << "Enter the numbers:";
	cin >> a;
	cin >> b;
	cout << "\n";
	cout << a;
	cout << "\n";
	cout << b;
	cout << "\n";
	cout << "Swaping the two numbers";
	cout << "\n";
	swap(a,b);
	
	return 0;
}

	
