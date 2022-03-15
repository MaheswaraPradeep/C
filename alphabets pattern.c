#include<stdio.h>
int main()
{
	int i,j,n,c;
	printf("Enter n value");
	scanf("%d",&n);
	for (i=0;i<=n;++i)
	{
		for (j=0;j<=i;++j)
		{
			c=65+i;
			printf("%c ",c);
		}
		printf("\n");
	}
}
