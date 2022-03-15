#include<stdio.h>
main()
{
	int n,i,a[15],count=0;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("the number is %d:",n);
	for(i=0;n>0;i++)
		{
			a[i]=n%2;
			printf("the content in array is %d",a[i]);
			n=n/2;			
		}
	for(i=i-1;i>=0;i--)
	printf("%d",a[i]);
	
}
		
	
	

