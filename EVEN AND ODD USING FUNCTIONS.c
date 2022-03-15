#include <stdio.h>
void printEven();
void printOdd();
int main()
{
    printEven(); 
    printOdd();
    return 0;
}

void printEven()
{
   int i, n;
  
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
    
}
void printOdd()
{
   int i, n;
  
    printf("Print all odd numbers till: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            printf("%d\n", i);
        }
    }
    
}
