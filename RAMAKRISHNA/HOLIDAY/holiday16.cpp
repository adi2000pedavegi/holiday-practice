#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	char s1[20],s2[20],s3[20];
	cout << "enter the first string:";
	cout << "\n";
	gets(s1);
	cout << "enter the second string:";
	cout << "\n";
	gets(s2);
	cout << strlen(s1) << "\t" << strlen(s2);
	cout << "\n";
	cout << strcpy(s3,s1);
	cout << "\n";
	cout << strcat(s2,s1);
	cout << "\n";
	cout << s2;
	cout << "\n";
	cout << strlen(strcat(s3,s1));
	cout << "\n";
	cout << puts(s3);
	
	
	return 0;
}
	
	
	
