#include <stdio.h>

/*float average(int *a,int s);
float average(int *a,int s)
{
	int i,sum1 = 0;
	float avg;
	for(i=0;i<s;i++)
	{
		sum1 = sum1 + a[i];
	}
	avg = (float)sum1/s;
	return avg;
}

int main()
{
	int max = 5;
	int a[] = {100,2,3,17,50};
	float avg;
	avg = average(a,max);
	printf("%f\n",avg);
	return 0;
}*/

int main()
{
	int max=5,i;
	double val[] = {100,153,65,48,92};
	double *ip;
	/*ip = &val[0];*/
	ip = val;
	for(i=0;i<max;i++)
	{
		printf("%f\n",*(ip+i));
	}
	return 0;
}

	





