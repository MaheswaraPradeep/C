#include<stdio.h>
int main()
{
	float maths,science,social,telugu,english,average;
	printf("Enter maths value");
	scanf("%f",&maths);
	printf("Enter science value");
	scanf("%f",&science);
	printf("Enter social value");
	scanf("%f",&social);
	printf("Enter telugu value");
	scanf("%f",&telugu);
	printf("Enter english value");
	scanf("%f",&english);
	average=maths+science+social+telugu+english;
	printf("%f",average);
}
