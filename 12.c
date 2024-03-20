// Develop a C program to calculate the factorial of a given non-negative integer.

#include <stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d non-negative integer is %d",n,fact);
    return 0;
}