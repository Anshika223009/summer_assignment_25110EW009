#include <stdio.h>

int main()
{
    int i, num, temp, remainder, sum = 0, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        remainder = temp % 10;

        for (int i = 1; i <= remainder; i++)

        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == num)

        printf("%d is not a Strong Number", num);

    else

        printf("%d is a Strong Number", num);


    return 0;
}