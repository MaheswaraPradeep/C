#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000]="pradeep";
	char ch;
	int l,i;
	l=strlen(a);
	for(i=0;i<l/2;i++)
	{
		ch=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=ch;
	}
	printf("The reversed string is %s",a);
}
