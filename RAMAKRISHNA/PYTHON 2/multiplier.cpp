#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n1[100],n2[100],k1,k2,i1,i2,sum1,sum2,j1,j2;
	int t,p,q[100];
	cout << "enter the dimension of the arrays";
	cin >> k1;
	cin >> k2;
	
	cout << "enter the two binary numbers";
	for(j1=0;j1<=k1-1;j1++)
	{
		cin >> n1[j1];
	}
	cout << "\n";
	for(j2=0;j2<=k2-1;j2++)
	{
		cin >> n2[j2];
	}
	cout << "\n";		
	sum1=0;
	for(i1=0;i1<=k1-1;i1++)
	{
		sum1=sum1+(n1[k1-1-i1]*(pow(2,i1)));
	}
	
	cout << "\n";	
	sum2=0;
	for(i2=0;i2<=k2-1;i2++)
	{
		sum2=sum2+(n2[k2-1-i2]*(pow(2,i2)));
	}	
	
	
	t=sum1*sum2;
	cout << t;
	cout <<"\n";
	
	while(t>0)
	{
		for(p=0;p<=(k1+k2);p++)
		{
			q[p]=t%2;
			t=t/2;
		}
		
	}
	cout << "\n";
	for(p=0;p<=(k1+k2);p++)
	{
		cout << q[(k1+k2)-p];
	}	
	return 0;
}			
			
		
		
	

	

