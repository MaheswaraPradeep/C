#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	printf("Enter number of rows");
	scanf("%d",&m);
	printf("Enter number of columns");
	scanf("%d",&n);
	printf("Enter the elemnts of the array");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements in the matrix are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
