#include <iostream>
using namespace std;
int main()
{
	char s1[10],*s2[10];
	int i,n;
	cout << "enter the size of the string:";
	cin >> n;
	cout << "\n";
	cout << "enter the string:";
	cout << "\n";
	for(i=0;i<n;i++)
	{
		cin >> s1[i];
	}
	cout << "\n";
	for(i=0;i<n;i++)
	{
		s2[i] = &s1[i];
		cout << *s2[i];
		cout << "\n";
	}
	return 0;
}
		
		
		
		
