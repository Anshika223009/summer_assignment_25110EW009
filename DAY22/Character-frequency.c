#include <stdio.h>

int main() 
{
    int i, count = 0;
    char str[100], ch;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}