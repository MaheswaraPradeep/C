#include<stdio.h>
int main()
{
	int num,bit,n;
	printf("Enter num value");
	scanf("%d",&num);
	printf("Enter n value");
	scanf("%d",&n);
	bit=(num>>n,1);
	printf("%d",bit);
}
