#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
	char s1[10],s2[10],s3[10];
	int i,n,l1,l2,leff;
	cout << "enter the size of the string";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> s1[i];
	}
	for(i=0;i<n;i++)
	{
		cout << s1[n-i-1];
	}
	cout << "\n";
	for(i=0;i<n;i++)
	{
		cin >> s2[i];
	}
		
	
	strcpy(s3,s1);
	cout << s3;
	cout << "\n";
	cout << strcat(s1,s2);
	cout << "\n";
	leff = strlen(strcat(s1,s2));
	cout << leff;
	cout << "\n";
	l1 =  strlen(s1);
	cout << l1;
	cout << "\n";
	l2 =  strlen(s2);
	cout << l2;
	cout << "\n";
	return 0;
}
	
	
			
