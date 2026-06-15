#include <stdio.h>

int main() 
{
    int i, num, temp;

    printf("Enter size of array: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter array elements:\n ");

    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < num / 2; i++) 
    {
        temp = array[i];
        array[i] = array[num - 1 - i];
        array[num - 1 - i] = temp;
    }

    printf("Reversed array: ");

    for(i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}