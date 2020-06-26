#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[100];
	int i,j;
	int n;
	
	
	
	
	
	cout << "enter the string\n";
	
	gets(str);
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		
		
		for(j=0;j<i;j++)
		{
			
			if(str[i] == str[j])
			{
				cout << str[i];
				break;
			}
			
			
		}
		
		
	}
		
	if(str[0]==str[n-2])
	{
		
		cout << str[0];
		
		
	}
	cout << "\n";
	
	
	cout << "\n";
	return 0;
}
				
