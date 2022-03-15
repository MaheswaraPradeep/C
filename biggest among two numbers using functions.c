#include<stdio.h>
int biggestnum(int,int);
int main()
{
  int a,b,res;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  res=biggestnum(a,b);
  printf("%d is biggest",res);
}
int biggestnum(int x,int y)
{
if (x>y)
return x;
else 
return y;
}

	

