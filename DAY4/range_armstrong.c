#include <stdio.h>

int main()
{

    int num, start, end, temp, remainder, sum ;

    printf("enter the starting number:");
    scanf("%d", &start);

    printf("enter the ending number :");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for ( num = start; num <= end ; num++)
    {
        temp = num;

        sum = 0;

        while( temp != 0)
        {
            remainder = temp % 10;
            sum = sum + (remainder * remainder * remainder);
            temp = temp / 10;
        }

        if( sum == num)

        printf("%d\n", num);

    }

     return 0;
}