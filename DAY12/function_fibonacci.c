#include <stdio.h>

void fibonacci(int num)
{
    int a = 0, b = 1, c, i;

    printf("%d %d ", a, b);

    for(i = 3; i <= num; i++)

    {
        c = a + b;
        
        printf("%d ", c);
        a = b;
        b = c;
    }

}

int main()
{
    int num;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}