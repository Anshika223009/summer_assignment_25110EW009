#include <stdio.h>

int main()
{
    int i, num, sum = 0,  array[100];
    float avg;

    printf("enter the number of elements :");
    scanf("%d", &num);

    
    printf("Enter array elements:\n");

    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);

        sum = sum + array[i];
    }

     avg = (float)sum / num;

     printf("Sum = %d\n", sum);
     printf("average = %.2f\n", avg);

     return 0;

}