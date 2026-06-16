#include <stdio.h>

int main()
{
    int i, num, sum = 0, total, missing;

    printf("Enter value of num: ");
    scanf("%d", &num);

    int array[num - 1];

    printf("Enter %d elements: ", num - 1);

    for(i = 0; i < num - 1; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }

    total = num * (num + 1) / 2;
    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}