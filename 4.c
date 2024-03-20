#include<stdio.h>
void main()
{
    int i,j,k,l;
    printf("Enter first number ");
    scanf("%d",&i);
    printf("Enter second number ");
    scanf("%d",&j);
    printf("....Manu.... \n 1 for + \n 2 for - \n 3 for * \n 4 for /");
    scanf("%d",&k);
     if (k ==1){
        l = i+j;
      }
      else if (k ==2){
        l = i-j;
      }
     else if (k ==3){
        l = i*j;
     }
     else if (k ==4){
        l = i/j;
     }
      else
      {
        printf("Invalid number");
      }
    printf("%d",l);  
}