// Cmplement a C program to determine whether a given number is prime or not.


#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%2==0)
    {
      printf("%d is not a prime number", a);  
    }
    else
    {
        printf("%d is a prime number", a);
    }
    
    return 0;
}
