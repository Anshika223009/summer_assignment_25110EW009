#include <stdio.h>

int main()
{
    int decimal = 0, binary, base = 1, rem, temp;

    printf("enter a binary number :");
    scanf("%d", &binary);

    temp = binary;

    while(temp > 0)
    {
        rem = temp % 10;
        decimal = decimal + rem * base;
        temp = temp / 10;
        base = base * 2;

    }

    printf("decimal number = %d\n", decimal);

    return 0;

}