#include <stdio.h>

int main() 
{
    int a[50], b[50], c[100];
    int i, j, k = 0, num1, num2, found;

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
        c[k++] = a[i];

    for(i = 0; i < num2; i++) 
    {
        found = 0;
        for(j = 0; j < k; j++) 
        {
            if(b[i] == c[j]) 
            {
                found = 1;
                break;
            }
        }

         if(found == 0)
            c[k++] = b[i];
    }

    printf("Union of arrays: ");
    
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}