#include <stdio.h>
#include <string.h>

int main() 
{
    int freq[256] = {0}, i;
    char str[100];


    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        freq[str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(freq[str[i]] == 1) 
        {
            printf("First non-repeating character = %c", str[i]);
            break;
        }
    }

    return 0;
}