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
        for(j = i + 1; j < num; j++)
        {
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Array in descending order: ");

    for(i = 0; i < num; i++)
    
        printf("%d ", array[i]);

    return 0;
}
