#include<stdio.h>
int main()
{
	int n,i,remainder,sum=0;
	printf("Enter n value");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
	   remainder=n%i;
	   if(remainder==0)
	   sum=sum+i;
	}
	if(sum==n)
	printf("The number is a perfect number");
	else
	printf("The number is not a perfect number");
}
