#include <stdio.h>

int main() 
{
    int i, num;

    printf("Enter size of array: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter array elements: ");

    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    int last = array[num - 1];

    for(i = num - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
        array[0] = last;
    }

    printf("Array after right rotation: ");

    for(i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}