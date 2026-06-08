#include <stdio.h>

int main()
{
    int x, n, i, result = 1;

    printf("enter x and n : ");
    scanf(" %d %d", &x, &n);


    for( i = 1; i <= n; i++)
    {
        result = result * x;

    }

    printf(" %d^%d = %d", x,n, result );

    return 0;
}