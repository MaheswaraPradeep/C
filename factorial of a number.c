#include<stdio.h>
int main()
{
	long long int n,i,fact=1;
	printf("Enter n value");
	scanf("%llu",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
    }
    printf("The factorial of the number is %llu",fact);
	}
