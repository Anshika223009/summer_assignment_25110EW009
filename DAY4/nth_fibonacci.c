#include <stdio.h>
int main()

{
    int i, num, firstNum = 0 , secondNum = 1, nextNum;

    printf("enter the value of number:");
    scanf("%d", &num);

    if( num == 0)
    printf("Nth fibonacci term = %d", firstNum);

    else if ( num == 1)
    printf("Nth fibonacci term = %d", secondNum);

    else
    {
        for ( int i = 2; i <= num; i++)
        {
            nextNum = firstNum + secondNum;

            firstNum = secondNum;

            secondNum = nextNum;
        }

        printf("Nth fibonacci term = %d", secondNum);
    }

      return 0;

}