#include <stdio.h>

int main() 
{
    int i, num;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter array elements: ");

    for(i = 0; i < num; i++)
     {
        scanf("%d", &array[i]);
     }

    int largest = array[0];
    int second = array[0];

    for(i = 1; i < num; i++) 
    {
        if(array[i] > largest)
         {
            second = largest;
            largest = array[i];
         }

        else if(array[i] > second && array[i] != largest)
         {
            second = array[i];
         }
    }

    printf("Second Largest Element = %d", second);

    return 0;
}