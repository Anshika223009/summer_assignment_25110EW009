#include <stdio.h>

int main()
{
    int i, num, firstNum = 0 , secondNum = 1 , nextNum;

    printf(" enter the number of terms:");
    scanf("%d", &num);

    printf("Fibonacci series:\n");

    for(int i=0; i <= num; i++)
    {
        printf("%d\n", firstNum);

        nextNum = firstNum + secondNum;

        firstNum = secondNum;

         secondNum = nextNum;
    }

    return 0;

}