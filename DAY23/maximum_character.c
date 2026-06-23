#include <stdio.h>

int main() 
{
    int i, freq[256] = {0},  max = 0;
    char str[100];
    char ch;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        freq[str[i]]++;
    }

    for(i = 0; i < 256; i++) 
    {
        if(freq[i] > max) 
        {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum occurring character = %c", ch);
    printf("\nFrequency = %d", max);

    return 0;
}