#include<stdio.h>
int main()
{
   int side1, side2, side3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   switch ((side1+side2>side3)&&(side2+side3>side1)&&(side1+side3>side2))//TO SATSFY THE TRIANGLE PROPERTIES
  {
   case 1:
   if((side1==side2)&&(side2==side3)&&(side1==side3))
   printf("The given Triangle is equilateral");
   else if((side1==side2)||(side2==side3)||(side3==side1))
   printf("The given Triangle is isosceles");
   else
   printf("The given Triangle is scalene");
   break;
   case 0:
   printf("The triangle is not valid");
   break;
  } 
   
}
