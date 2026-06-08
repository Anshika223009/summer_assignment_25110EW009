#include <stdio.h>

int main()

{
    int i , num, largest = 1;

    printf("enter a number:");
    scanf("%d", &num);

    for(i = 2; i<=num; i++)

    {
        while(num % i == 0)
        {
            largest = 1;
            num = num / i;
        }
    }

     printf("largest prime factor = %d ", largest);

     return 0;

}