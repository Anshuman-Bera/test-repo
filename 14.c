#include<stdio.h>

// Sample Comment
int main()
{
    int i, arr;
    scanf("%d", &arr);
    for ( i = 0; i < 100; i++)
    {
        if (arr[i]!=(i+1))
        {
            printf("Missing num %s",(i+1));
            break;
        }
        
    }
    
    
}