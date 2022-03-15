#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],r1,c1,r2,c2,i,j,k,m[10][10];
	printf("Enter number of rows in first matrix");
	scanf("%d",&r1);
	printf("Enter number of columns in first matrix");
	scanf("%d",&c1);
	printf("Enter %d elements in first matrix",(r1*c1));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter number of rows in second matrix");
	scanf("%d",&r2);
	printf("Enter number of columns in second matrix");
	scanf("%d",&c2);
	printf("Enter %d elements in second matrix",(r2*c2));
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The first matrix is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is\n");
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("The multiplication of the matrix are:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			m[i][j]=0;
			for(k=0;k<c1;k++)
			{
				m[i][j]=m[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
