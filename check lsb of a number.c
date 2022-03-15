#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if (num & 1)
	printf("Enter the number is set(1)");
	else
	printf("Enter the number is set(0)");
}
