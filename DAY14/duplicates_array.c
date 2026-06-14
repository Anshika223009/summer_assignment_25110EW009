#include <stdio.h>

int main() 
{
    int  i, j, num;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter array elements:\n ");

    for(i = 0; i < num; i++) 
    {
        scanf("%d", &array[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < num; i++) 
    {

        for(j = i + 1; j < num; j++) 
        {
            if(array[i] == array[j]) 
            {
                printf("%d ", array[i]);
                break;
            }
        }
    }

    return 0;
}