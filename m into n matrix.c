#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
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
}
