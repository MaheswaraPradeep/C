#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value");
	scanf("%d",&a);
	printf("Enter b value");
	scanf("%d",&b);
	printf("Enter c value");
	scanf("%d",&c);
	if ((a<b)&&(a<c))
    printf("%d is the smallest",a);	
    else if ((b<a)&&(b<c))
    printf("%d is the smallest",b);	
    else
    printf("%d is the smallest",c);	
}
