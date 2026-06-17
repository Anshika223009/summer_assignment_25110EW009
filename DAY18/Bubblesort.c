#include <stdio.h>

int main()
{
    int i, j, num, temp;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter elements: ");

    for(i = 0; i < num; i++)
        scanf("%d", &array[i]);

    for(i = 0; i < num - 1; i++)
    {
        for(j = 0; j < num - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < num; i++)
        printf("%d ", array[i]);

    return 0;
}