#include <stdio.h>
#include <stdlib.h>

//Programme  qui remplit un tableau d'entiers et calcule la somme de ses éléments en le parcourant avec un pointeur

int main() {
    int arrInt[4];
    int *p, sum = 0;
    printf("Rentrer 4 valeur int:\n");

    for(p=arrInt; p < arrInt + 4; p++){
        scanf("%d", p);
    }

    for (p=arrInt; p < arrInt + 4; p++){
        sum = sum + *p;
    }
    printf("sum = %d \n", sum);
    getchar();

    return 0;
}

