#include <stdio.h>

int main()

{
    int num, originalNum, remainder, sum = 0;

    printf("enter a number :");
    scanf("%d", &num);

    originalNum = num;

    while ( num != 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if ( sum == originalNum)
    printf("%d is an armstrong number", originalNum);

    else
    printf("%d is not an armstrong number", originalNum);


    return 0;
}