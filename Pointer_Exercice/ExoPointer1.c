#include <stdio.h>
#include <stdlib.h>

// sum of two pointeur
int main() {
    int a = 4;
    int b = 8;
    int sum = 0;

    int *pA = &a;
    int *pB = &b;

    sum = *pA + *pB;
    printf("%i",sum);

}