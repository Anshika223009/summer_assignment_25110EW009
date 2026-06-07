#include<stdio.h>

int main()

{
    int num, sum = 0;

    printf("Enter a postive integer:");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
        sum+=i;

    }

    printf("Sum of N natural number is %d",sum);

    return 0;

}