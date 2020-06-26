#include <stdio.h>
#include <stdlib.h>
double **createMat(int m,int n);
void readMat(int m,int n,double **p);
void printMat(int m,int n,double **p);
void transpose(int m,int n,double **p);
void sumMat(int m,int n,double **p);
void diffMat(int m,int n,double **p);
int main()
{
	int i,j,m,n;
	double **a,**b;
	printf("enter the sizeof the matrix:\n");
	scanf("%d%d",&m,&n);
	a=createMat(m,n);
	readMat(m,n,a);
	printMat(m,n,a);
	printf("transpose of the matrix:\n");
	transpose(m,n,a);
	printf("sum of the matrices\n");
	sumMat(m,n,a);
	printf("difference of the matrices\n");
	diffMat(m,n,a);
	b=(double **)malloc(n *sizeof(*b));
	for(i=0;i<n;i++)
	{
		b[i]=(double *)malloc(n *sizeof(*b[i]));
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
				
	double **createMat(int m,int n)
	{
		int i;
		double **a;
		a=(double **)malloc(m *sizeof(*a));
		for(i=0;i<m;i++)
		{
			a[i]=(double *)malloc(n *sizeof(*a[i]));
		}
		return a;
	}
	void readMat(int m,int n,double**p)
	{
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lf",&p[i][j]);
			}
		}
	}
	void printMat(int m,int n,double **p)
	{
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j>n;j++)
			{
				printf("%lf",p[i][j]);
			}
			printf("\n");
		}
	}
	void transpose(int m,int n,double **p)
	{
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%lf",p[j][i]);
			}
			printf("\n");
		}
	}
	void sumMat(int m,int n,double **p)
	{
		int i,j;
		double x;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				x=p[i][j]+p[j][i];
				printf("%lf",x);
			}
			printf("\n");
		}
	}
	void diffMat(int m,int n,double **p)
	{
		int i,j;
		double y;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				y=p[i][j]-p[j][i];
				printf("%lf",y);
			}
			printf("\n");
		}
	}
	return 0;
}
																	
					
			
	
	
	
	
