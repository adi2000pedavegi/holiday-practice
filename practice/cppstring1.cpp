/*Using cstring libarary and cout command in cpp remaining is same for c and cpp*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2,s3;
	int len;
	
	s1 = "Aditya";
	
	s2 = "Ramakrishna";
	s3 = s1;/*Copying a string strcpy*/
	s1 = s1 + s2; /*Concatenating a string strcat*/
	len = s1.size();/*Length of a string strlen*/
	cout << s3;
	cout << "\n";
	cout << s1;
	cout << "\n";
	cout << len;
	return 0;
}

	
