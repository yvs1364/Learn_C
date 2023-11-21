#include <stdio.h>
#include <stdlib.h>

// Swap letter
int main() {
    char a,b,c;
    a = 'z';
    b = 'e';

    char *pA = &a;
    char *pB = &b;

    printf("a = %c || b = %c \n",a,b);
    c = *pA;
    *pA = *pB;
    *pB = c;

    printf("a = %c || b = %c",a,b);

}

