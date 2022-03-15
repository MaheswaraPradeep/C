#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,t[10][10];
	printf("Enter number of rows");
	scanf("%d",&r);
	printf("Enter number of columns");
	scanf("%d",&c);
	printf("Enter %d matrix elements",(r*c));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements in the matrix are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("The transpose of the above matrix is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
