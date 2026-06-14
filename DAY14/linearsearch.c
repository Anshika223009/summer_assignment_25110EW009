#include <stdio.h>

int main()
{
    int i, num, search, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter array elements:\n");

    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < num; i++)
    {
        if(array[i] == search)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
      {
         printf("Element found at index %d", pos);
      }
    
    else
     {
        printf("Element not found");
     }
        

    return 0;
}