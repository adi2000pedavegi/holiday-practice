#include <iostream>
#include <math.h>
/*Bool type functions execute a conditional statement type functions and give logical outputs*/
using namespace std;
bool persq(int n)
{
	int s = sqrt(n);
	return (s*s==n);
}

bool sqper(int n)
{
	float f = pow(n,0.5);
	return (f-floor(f)==0);
}

int main()
{
	int n;
	cout << "Enter the number:";
	cin >> n;
	cout << persq(n);
	cout << "\n";
	cout << sqper(n);
	return 0;
}

	
