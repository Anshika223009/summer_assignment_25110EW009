#include <stdio.h>

int main()
{
    int i, num, search, low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter elements in sorted order: ");

    for(i = 0; i < num; i++)
        scanf("%d", &array[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = num - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(array[mid] == search)
         {
            printf("Element found at position %d", mid + 1);
            return 0;
         }

        else if(array[mid] < search)
            low = mid + 1;
            
        else
            high = mid - 1;
    }

    printf("Element not found");

    return 0;
}