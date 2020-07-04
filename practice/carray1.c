#include <stdio.h>
int main()
{
	int m,n,i,j;
	
	printf("Enter the size of the rows of the matrix:\n");
	scanf("%d",&m);
	printf("Enter the size of the columns of the matrix:\n");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
