#include <stdio.h>

int main()

{
    int i, j, start, end , flag;

    printf(" enter a starting number :");
    scanf("%d", &start);

    printf("enter ending number:");
    scanf("%d", &end);

    printf("prime numbers between %d and %d are : \n", start, end);

    for(i=start; i<=end; i++)
    {
        if (i<=1)
        continue;

        flag=1;

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)

        printf("%d \n",i);
    }

      return 0;
}