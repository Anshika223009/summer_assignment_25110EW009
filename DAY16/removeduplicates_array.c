#include <stdio.h>

int main()
{
    int  i, j, k, num;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter elements: ");

    for(i = 0; i < num; i++)
    {
         scanf("%d", &array[i]);
    }

    for(i = 0; i < num; i++)
    {
        for(j = i + 1; j < num;)
        {
            if(array[i] == array[j])
            {
                for(k = j; k < num - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                num--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}