// using array sum the even position numbers from 10 array element in c programming

#include <stdio.h>
void main()
{
    int x[10],i,s;
    for (i=0;i<=10;i++){
        scanf("%d",&x[i]);
    }
    s = 0;
    for (i=2;i<=10;i=i+2)
    {
        s = s+x[i];
    }
    printf("sum the even position numbers from 10 array element is %d",s);
    
}