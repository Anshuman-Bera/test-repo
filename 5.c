//  input first 20 inumber and sum them using array in c programing

#include <stdio.h>
void main()
{
    int x[20],i,s;
    for ( i = 0; i <= 20; i++){
        scanf("%d",&x[i]);
    }
    s = 0;
    for ( i = 0; i <=20; i++) {
        s = s +x[i];
    }
    printf("%d",s);
}

// #include <stdio.h>
// void main()
// {
//     int x[1],i;
//     for ( i = 0; i <= 4; i++)
//     {
//         // scanf("%d",&x[i]);
//         printf("%d",x[i]);
//     }
    
// }