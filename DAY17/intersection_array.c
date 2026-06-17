#include <stdio.h>

int main() 
{
    int a[50], b[50];
    int i, j, num1, num2;

    printf("Enter size of first array: ");
    scanf("%d", &num1);

    printf("Enter elements of first array:\n");

    for(i = 0; i < num1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &num2);

    printf("Enter elements of second array:\n");

    for(i = 0; i < num2; i++)
        scanf("%d", &b[i]);

    printf("Intersection of arrays: ");

    for(i = 0; i < num1; i++) 
    {
        for(j = 0; j < num2; j++) 
        {
            if(a[i] == b[j]) 
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}