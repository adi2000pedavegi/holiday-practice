#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a;
	int *p = NULL;
	cout << p;							//null pointer assignment(manam deniki assign cheyatledu)
	cout << "\n";
	cout << "enter the number:";
	cin >> a;
	cout << "\n";
	int *b;
	b = &a;
	cout << a;
	cout << "\n";
	cout << b;
	cout << "\n";
	cout << *b;
	return 0;
}
	
