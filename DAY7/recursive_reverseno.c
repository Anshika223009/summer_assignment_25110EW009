#include <stdio.h>

int rev = 0;

int reverse(int num)
{
    if( num == 0)
    return 0;

    rev = rev * 10 + num % 10;

    reverse(num / 10);

}

int main()
{
    int num;

    printf("enter a number : ");
    scanf("%d", &num);

    reverse(num);

    printf("Reverse number = %d", rev);

      return rev;

}