#include <iostream>
using namespace std;
/*Car refuleing problem statement*/
int minrefills(int *x,int n,int L)
{
	int current = 0;
	int numrefills = 0;
	int last;
	while(current<=n)
	{
		last = current;
		while(current<=n && x[current+1]-x[last]<=L)   /*Maximum possible fathest gas station can be reached atmost below the interval length L*/
		{
			current = current + 1;   /*We will get next gas station index at every instant*/
		}
		if(current==last)
		{
			return 0;
		}
		if(current<=n)
		{
			numrefills= numrefills + 1;
		}
	}
	return numrefills;
}
int main()
{
	int L = 400;
	int n = 4;
	int arr[] = {0,200,375,550,750,900};
	cout << "Minimum nuber of refills needed are";
	cout << "\n";
	cout << minrefills(arr,n,L);
	
	return 0;
}


		
		
		
