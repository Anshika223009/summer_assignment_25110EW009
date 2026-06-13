#include <stdio.h>

int main()
{
    int i, num, array[100];

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter array elements:\n");

    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    

    printf("Array elements are:\n");

    for(i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}