#include <stdio.h>
#include <string.h>

int main() 
{
    int i, freq[256] = {0};
    char str1[100], str2[100];
    

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2)) 
    {
        printf("Strings are not anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) 
    {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }

    for(i = 0; i < 256; i++) 
    {
        if(freq[i] != 0) 
        {
            printf("Strings are not anagrams");
            return 0;
        }
    }

    printf("Strings are anagrams");

    return 0;
}