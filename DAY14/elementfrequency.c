#include <stdio.h>

int main()
{
    int i, num, search , count = 0;

    printf("enter the number of elements:");
    scanf("%d", &num);

    int array[num];

    printf("enter array elements : \n");

    for( i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }


    printf("enter element whose frequency is to be found :");
    scanf("%d", &search);

    for( i = 0; i < num; i++)
    {
        if( array[i] == search)
        count++;
    }

    printf("frequency of %d = %d", search , count);

    return 0;

}
