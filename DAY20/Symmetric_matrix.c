#include <stdio.h>

int main() 
{
    int i, j, a[3][3], flag = 1;

    printf("Enter 3x3 matrix:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]); 
        }
    }

    for(i=0; i<3; i++) 
    {
        for(j=0; j<3; j++) 
        {
            if(a[i][j] != a[j][i]) 
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
    {
        printf("Matrix is symmetric.");
    }
    else
    {
        printf("Matrix is not symmetric.");

    }
    
    return 0;

}