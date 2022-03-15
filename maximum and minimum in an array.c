#include<stdio.h>
int main()
{
    int a[100],n,i,large,small;
    printf("Enter the number of elements");
    scanf("\n%d",&n);
    printf("\nEnter the array elements");
    for (i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("\nThe elements in the array are");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    large=a[0];
    for(i=1;i<n;i++)
    {
        if (large<a[i])
        large=a[i];
    }
    small=a[0];
    for(i=1;i<n;i++)
    {
    	if (small>a[i])
    	small=a[i];
	}
    printf("\n%d is the largest element in the array",large);
    printf("\n%d is the smallest element in the array",small);
}  
