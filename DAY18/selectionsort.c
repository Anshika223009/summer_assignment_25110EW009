#include <stdio.h>

int main()
{
    int i, j, num, min, temp;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter elements: ");

    for(i = 0; i < num; i++)
      scanf("%d", &array[i]);

    for(i = 0; i < num - 1; i++)
    {
        min = i;

        for(j = i + 1; j < num; j++)
        {
            if(array[j] < array[min])
                min = j;
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    printf("Sorted array: ");

    for(i = 0; i < num; i++)
        printf("%d ", array[i]);

    return 0;
}