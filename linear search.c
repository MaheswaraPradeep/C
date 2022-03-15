#include<stdio.h>
int main()
{
	int a[5],i,ele;
	printf("\n Enter the array elements");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("\nEnter the element you want to search");
	scanf("\n%d",&ele);
	for(i=0;i<5;i++)
	{
		if(a[i]==ele)
		{
		printf("\nElement found");
		
	    }
	    else
		printf("\nElement not found");
	}
}
