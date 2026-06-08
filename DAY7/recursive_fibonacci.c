#include <stdio.h>

int fibonacci( int num )
{
    if( num == 0)

    return 0;

    if( num == 1)

    return 1;

    return fibonacci( num - 1) + fibonacci( num - 2);

}

int main()
{
    int i, num;

    printf("enter number of terms :");
    scanf("%d", &num);

    for( i = 0; i < num; i++)
    {

        printf("%d\n", fibonacci(i));

    }

    return 0;
}