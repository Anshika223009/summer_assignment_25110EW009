#include <stdio.h>

int main()
{
    int i, num, even = 0, odd = 0, array[100];

    printf("enter the number of elements:");
    scanf("%d", &num);

    printf(" enter array elements:\n");

    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < num; i++)
    {
        if(array[i] % 2 == 0)
          even++;

        else
          odd++;
    }

    printf("Number of even elements = %d\n", even);

    printf("Number of odd elements = %d\n", odd);

    return 0;

}
