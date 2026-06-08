#include <stdio.h>

int sumofdigits(int num)

{
    if( num == 0)
    return 0;

    return (num % 10) + sumofdigits(num / 10);

}

int main()
{
    int num;

    printf("enter a number : ");
    scanf("%d", &num);

    printf("sum of digits = %d", sumofdigits(num));

    return 0;
}