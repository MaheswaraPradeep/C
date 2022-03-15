#include<stdio.h>
int main()
{
	char upperChar,lowerChar;
	int ascii=upperChar;
	printf("Enter upperChar");
	scanf("%c",&upperChar);
	ascii=upperChar;
	lowerChar=ascii+32;
	printf("The result is %c",lowerChar);
}
