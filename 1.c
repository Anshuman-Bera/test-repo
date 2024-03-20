#include<stdio.h>

void main()
{
    int fahr,celsius;

     for (fahr = 0; fahr <= 300; fahr = fahr + 20)
     {
        // celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3d %6.1f\n",fahr,(5.0/9.0) * (fahr-32.0));
     }
     
}