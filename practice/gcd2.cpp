#include <iostream>
using namespace std;
/*GCD(p,q) is same as GCD(q,p remainder with dividing with q)*/ 
/*Doing recursion till the remainder reaches to zero*/
int gcd(int p,int q)
{
	int pdash;
	if(q==0)
	{
		return p;
	}
	pdash = p%q;
	return gcd(q,pdash);
	
}

	
int main()
{
	int a,b;
	cout << "Enter the numbers:";
	cin >> a;
	cin >> b;
	cout << gcd(a,b);
	return 0;
}

	
