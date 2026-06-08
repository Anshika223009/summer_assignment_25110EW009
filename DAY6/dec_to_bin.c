#include <stdio.h>

int main()
{
    int i = 0, j, dec, binary[32];

    printf("enter a decimal number :");
    scanf("%d", &dec);

    if(dec == 0)
    {
        printf("binary = 0\n");
        return 0;
    }

    while(dec > 0)
    {
        binary[i] = dec % 2;
        dec = dec / 2;
        i++;
    }

    printf("binary = ");

    for(int j = i - 1 ; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}