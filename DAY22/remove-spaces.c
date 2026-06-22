#include <stdio.h>

int main() 
{
    int i, j = 0;
    char str[100], newstr[100];


    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] != ' ') 
        {
            newstr[j] = str[i];
            j++;
        }
    }

    newstr[j] = '\0';

    printf("String after removing spaces: %s", newstr);

    return 0;
}