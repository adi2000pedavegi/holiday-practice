#include <stdio.h>
/*int main()
{
	int max = 4;
	int val[] = {15,153,200,645};
	int i,*ptr[4];         
	for(i=0;i<max;i++)
	{
		ptr[i] = &val[i];
		printf("%d\n",*ptr[i]);
		printf("%x\n",ptr[i]);
	}
	return 0;
}*/

int main()
{
	int max=4,i;
	char *val[] = {"Aditya","Ramakrishna","Pedavegi","Comedy"};
	for(i=0;i<max;i++)
	{
		
		printf("%s\n",val[i]);
	}
	return 0;
}


	

		
	

	

