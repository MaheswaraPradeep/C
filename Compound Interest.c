#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,a,CI;
	printf("Enter p value");
	scanf("%f",&p);
	printf("Enter r value");
	scanf("%f",&r);
	printf("Enter t value");
	scanf("%f",&t);
	float x=1+r/100;
	a=p*pow(x,t);
	CI=a-p;
	printf("%f",CI);
}
