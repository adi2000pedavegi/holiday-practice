#include <stdio.h>

int main()
{
	int val=153,*ptr1,**ptr2;
	ptr1 = &val;
	ptr2 = &ptr1;     /*Pointer to pointer variable assigning*/ 
	printf("%d\n",val);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
	printf("%x\n",ptr1);
	printf("%x\n",ptr2);
	return 0;
}

	
