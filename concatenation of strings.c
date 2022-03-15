#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]="Welcome to";
	char b[50]="my world";
	printf("\nThe string1 is %s",a);
	printf("\nThe string2 is %s",b);
	printf("\nThe concatenated string is %s",strncat(a,b,4));
}
