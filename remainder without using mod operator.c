#include<stdio.h>
int main()
{
	int dividend,quotient,remainder,divisor;
	printf("Enter dividend value");
	scanf("%d",&dividend);
	printf("Enter quotient value");
	scanf("%d",&quotient);
	printf("Enter divisor value");
	scanf("%d",&divisor);
	remainder=dividend-(quotient*divisor);
	printf("%d",remainder);
}
