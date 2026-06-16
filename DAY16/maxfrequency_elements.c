#include <stdio.h>

int main()
{
    int i, j, num, count, element, maxfreq = 0;

    printf("Enter the number of elements:");
    scanf("%d", &num);

    int array[num] , freq[num];

    printf("Enter elements:");

    for( i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
        freq[i] = -1;
    }

    for( i = 0; i < num; i++)
    {
        count = 1;

        for( j = i + 1; j < num; j++)
        {
            if(array[i] == array[j])
            {
                count++;
                freq[j] = 0;
            }
        }

         if(freq[i] != 0)
           freq[i] = count;
    }

     for( i = 0; i < num; i++)
     {
        if(freq[i] > maxfreq)
        {
            maxfreq = freq[i];
            element = array[i];
        }
     }


     printf("Element with maximum frequency = %d\n", element);

       printf("Frequency = %d", maxfreq);

       return 0;

}