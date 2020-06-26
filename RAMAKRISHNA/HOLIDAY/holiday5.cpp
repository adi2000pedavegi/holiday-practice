#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[10] = "Aditya";
	char str2[20] = "Ramakrishna";
	char str3[10];
	strcpy(str3,str1);
	cout << str3;
	cout << "\n";
	cout << strcat(str1,str2);
	cout << "\n";
	cout << strlen(str2);
	cout << "\n";
	cout << strcmp(str1,str2);
	cout << "\n";
	
	return 0;
	
}
