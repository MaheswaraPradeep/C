#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value");
	scanf("%d",&a);
	printf("Enter b value");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("%d\n",a);
	printf("%d",b);
}
