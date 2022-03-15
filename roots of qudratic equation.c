#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,discriminant,root1,root2,realpart,imagpart;
	printf("Enter a value");
	scanf("%f",&a);
	printf("Enter b value");
	scanf("%f",&b);
	printf("Enter c value");
	scanf("%f",&c);
	discriminant=(b*b-(4*a*c));
	if (discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/2*a;
		root2=(-b-sqrt(discriminant))/2*a;
		printf("The roots are %f,%f",root1,root2);
	}
	else if (discriminant==0)
	{
	    root1=root2=(-b/2*a);
	    printf("The roots are %f,%f",root1,root2);
	}
	else
	{
	    realpart=-b/2*a;
		imagpart=sqrt(-discriminant/2*a);
		printf("root1=%f+%f,root2=%f-%f",realpart,imagpart);
		    
	}

}
