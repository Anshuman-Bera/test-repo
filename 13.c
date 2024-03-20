//  How do you find the missing number using C program in a given integer array of 1 to 100?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[100];
    int i, j, k, n, m;
    for (i = 0; i < 100; i++)
    {
        a[i] = rand() % 100 + 1;
    }
    for (i = 0; i < 100; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            if (a[i] + a[j] == 202)
            {
                printf("%d + %d = %d\n", a[i], a[j], 202);
            }
        }
    }
    return 0;
}