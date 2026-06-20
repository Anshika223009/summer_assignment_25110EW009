#include <stdio.h>

int main()
{
    int i, j, a[3][3], sum;

    printf("Enter 3*3 matrix:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

     printf("Row-wise sums are:\n");

     for(i=0; i<3; i++)
     {
         sum = 0;

        for(j=0; j<3; j++)
        {
            sum = sum + a[i][j];
        }

          printf("Sum of row %d = %d\n", i+1, sum);
     }
      
     return 0;
     
}     