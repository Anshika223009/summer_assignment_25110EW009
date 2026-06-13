#include <stdio.h>

int main()
{
    int i, num, large , small , array[100];

    printf("enter the number of elements:");
    scanf("%d", &num);

    printf("enter array elements:\n");

    for( i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    large = array[0];
    small = array[0];

    for( i = 1; i < num; i++)
    {
        if(array[i] > large)
           large = array[i];

        if(array[i] < small)
           small = array[i];
    }

    printf("largest element = %d", large);
    printf("smallest element = %d", small);

    return 0;

}