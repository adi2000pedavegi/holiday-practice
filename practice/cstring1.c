#include <stdio.h>
#include <string.h>
int main()
{
	int len,cmp;
	char s1[10] = "Aditya";
	char s2[20] = "Ramakrishna";
	char s3[40],s4[40];
	strcpy(s3,s1);
	printf("%s\n",s3);
	strcat(s2,s1);
	printf("%s\n",s2);
	/*strcat(s1,s2);
	printf("%s\n",s1);*/
	cmp = strcmp(s1,s2);
	len = strlen(s1);
	printf("%d\n",cmp);
	printf("%d\n",len);
	gets(s4);
	puts(s4);/*Run time input for strings in C*/
	return 0;
	
	
	
}

	
	
