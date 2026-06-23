#include <stdio.h>

int main() 
{
    int i, freq[256] = {0};
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        freq[str[i]]++;

        if(freq[str[i]] == 2) 
        {
            printf("First repeating character = %c", str[i]);
            break;
        }
    }

    return 0;
}