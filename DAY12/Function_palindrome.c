#include <stdio.h>

int palindrome(int num)

{
    int rev = 0, temp = num;

    while(temp > 0)

    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    return (rev == num);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(palindrome(num))
        printf("Palindrome Number");

    else
        printf("Not a Palindrome Number");

    return 0;
}