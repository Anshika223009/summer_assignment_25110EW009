#include <stdio.h>

int main()
{

    int num, reverse=0, originalNum, digit;

    printf("enter a number :");
    scanf("%d", &num);
   
    originalNum = num;

    while(num>0)

    {
        digit = num % 10;
        reverse = reverse*10 + digit;
        num = num / 10;
    }
     if (originalNum == reverse)

     printf("The number is palindrome");

     else

     printf("The number is not palindrome");


     return 0;

}