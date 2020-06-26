#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[100];
	int i,j,n;
	char temp;
	cout << "enter the size of the string\n";
	
	gets(str);
	cin >> n;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i]!=str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				
				
				
				
			}
			
			
		}
		cout <<str[i];
		
	}
	
	
	return 0;
}
	
		
