#include <stdio.h>

int main() 
{
    int a[50], b[50], c[100];
    int i, num1, num2;

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

    for(i = 0; i < num1; i++)
        c[i] = a[i];

    for(i = 0; i < num2; i++)
        c[num1 + i] = b[i];

    printf("Merged array: ");

    for(i = 0; i < num1 + num2; i++)
    
        printf("%d ", c[i]);

    return 0;
}