#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int aditya(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return a;
}
int ramakrishna(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return b;
}
	

int main()
{
	int p,q,r,s;
	cout << "enter the first number:";
	cin >> p;
	cout << "\n";
	cout << "enter the second number:";
	cin >> q;
	r = aditya(p,q);
	s = ramakrishna(p,q);
	cout << r;
	cout << "\n";
	cout << s;
	return 0;
}
	
	
	
	
		
		
	
