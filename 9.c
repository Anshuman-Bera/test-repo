
#include <stdio.h>

void main() {
    int a, revNum = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &a);
    while (a != 0) {
        rem = a % 10;
        revNum = revNum * 10 + rem;
        a /= 10;
    }
    printf("Reversed number is: %d\n", revNum);
}
