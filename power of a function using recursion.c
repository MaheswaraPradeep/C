#include<stdio.h>
int power(int,int);
int main()
{
	int base,exponent,res;
	printf("Enter the base");
	scanf("%d",&base);
	printf("Enter the exponent");
	scanf("%d",&exponent);
	res=power(base,exponent);
	printf("Power of the function is %d",res);	
}
int power(int base,int exponent)
{
	if (exponent!=0)
	{
		return base+power(base,exponent-1);
	}
	else
	{
		return 0;
	}
}
