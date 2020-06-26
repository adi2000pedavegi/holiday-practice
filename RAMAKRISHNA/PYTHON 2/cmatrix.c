#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a[10][10],c[10][10],t[10][10],d[10][10],e[10][10],m,n,i,j,k,sum,f[10][10],trace;
	float g[10][10],det, h[10][10];
	printf("enter the size of the matrix:\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[i][j]=a[j][i];
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+t[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][j]-t[i][j];
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}		
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				
				sum=sum+(a[i][k]*t[k][j]);
			}	
				e[i][j]=sum;
				printf("%d\t",e[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			f[i][j]=((pow(-1,i+j))*(a[1-i][1-j]));
			printf("%d\t",f[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			g[i][j]=f[j][i];
			printf("%f\t",g[i][j]);
		}
		printf("\n");
	}	
det=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
printf("%f\n",det);		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			h[i][j]=(g[i][j])/det;
			printf("%f\t",h[i][j]);
		}
		printf("\n");
	}			
trace=a[0][0]+a[1][1];
printf("%d\n",trace);

return 0;
}
							
	
