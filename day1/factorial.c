#include <stdio.h>

int main()
{
    int i, num, factorial;

    factorial=1;

    printf("enter a number:");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    
    {
        factorial = factorial*i;
    }

     printf("factorial of %d = %d",num,factorial);

     return 0;
}