#include <stdio.h>
int max = 4;
int main()
{
	int val[] ={10,100,200,1500};
	int i;
	int *ptr;
	
	ptr = &val[0];
	for(i=0;i<max;i++)
	{
		printf("%x\n",ptr);
		printf("%d\n",*ptr);
		ptr++;
	}
	return 0;
}

/*int max = 4;
int main()
{
	int val[] = {10,10,200,1500};
	int i;
	int *ptr;
	ptr = &val[max-1];
	for(i=max;i>0;i--)
	{
		printf("%x\n",ptr);
		printf("%d\n",*ptr);
		ptr--;
	}
	return 0;
}*/

			
