#include<stdio.h>
int fact(int);
int main()
{
	int n,res;
	printf("Enter the number\n");
	scanf("%d",&n);
	res=fact(n);
	printf("Factorial of the %d is %d",n,res);
}
int fact(int n)
{
	if (n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
