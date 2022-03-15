#include<stdio.h>
int main()
{
	float maths,social,science,telugu,english,total;
	float percentage;
	printf("Enter maths value");
	scanf("%f",&maths);
	printf("Enter soial value");
	scanf("%f",&social);
	printf("Enter science value");
	scanf("%f",&science);
	printf("Enter telugu value");
    scanf("%f",&telugu);
	printf("Enter english value");
	scanf("%f",&english);
	total=maths+social+science+telugu+english;
	percentage=total*100/500; 
	printf("The result is %f",percentage);
}
