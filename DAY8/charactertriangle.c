#include <stdio.h>

int main() 

{
    int i, j;
    int num;

    printf("Enter number of rows: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)

    {
        for(j = 0; j < i; j++) 

        {
            printf("%c", 'A' + j);

        }
        printf("\n");
    }

    return 0;

}