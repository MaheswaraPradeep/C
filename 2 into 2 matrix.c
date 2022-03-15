#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	printf("Enter the %d elements",(2*2));
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d/n",&a[i][j]);
		}
	}
	printf("The matrix elements are\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
