#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[100];
	int i;
	
	cout << "enter the size of the string\n";
	
	gets(str);
	for(i=0;i<10;i++)
	{
		if(str[i]!=str[i+1])
		{
			cout << str[i];
			cout << "\n";
		}
	}
	return 0;
}
			
		
		
		
