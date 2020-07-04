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

/*int main()
{
	int max=4,i;
	char *val[] = {"Aditya","Ramakrishna","Pedavegi","Comedy"};
	for(i=0;i<max;i++)
	{
		
		printf("%s\n",val[i]);
	}
	return 0;
}*/

int main()
{
	int val=153,*ptr1,**ptr2;
	ptr1 = &val;
	ptr2 = &ptr1;
	printf("%d\n",val);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
	printf("%x\n",ptr1);
	printf("%x\n",ptr2);
	return 0;
}

	
	

		
	

	

