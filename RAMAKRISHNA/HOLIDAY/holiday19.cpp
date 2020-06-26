#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	char s1[20];
	int c,i;
	cout << "enter the string:";
	gets(s1);
	c = strlen(s1);
	cout << c;
	cout << "\n";
	for(i=0;i<c/2;i++)
	{
		char temp;
		temp = s1[i];
		s1[i] = s1[c-1-i];
		s1[c-1-i] = temp;
	}
	for(i=0;i<c;i++)
	{
		cout << s1[i];
	}
	return 0;
}
			
	
	
