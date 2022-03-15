#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value ");
	scanf("%d",&a);
	switch (a>0)
	{
	case 1:
		printf("The number is positive");
	break;
	case 0:
	     switch (a<0)
	     {
	     	case 1:
	     		printf("The number is negative");
	     	break;	
	     	case 0:
	     		printf("The number is zero");
			break;	
		}	
	break;
    }
}
