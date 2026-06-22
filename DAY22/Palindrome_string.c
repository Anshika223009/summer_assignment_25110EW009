#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for( i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

     rev[i] = '\0';

     if(strcmp(str, rev) == 0)
     {
        printf("String is Palindrome");
     }
     else
     {
        printf("String is not Palindrome");
     }

      return 0;
}