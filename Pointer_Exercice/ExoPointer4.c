#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ecrire un programme C qui lit une cha�ne de caract�res et affiche cette cha�ne � partir de la premi�re occurrence d'un caract�re entr� par l'utilisateur.
 En utilisant pour ceci la fonction strchr et un pointeur pour le parcours de la cha�ne. */

int main() {
    char arrChar[50];
    char str;
    char *p;
    printf("Entrer une chaine de caractere\n");
    gets(arrChar);
    printf("Entrer une lettre\n");
    scanf("%c", &str); // Occurence rentré par l'user
    p = strchr(arrChar, str);
    if(p == NULL){
        printf("Lettre non présente");
    }else{
        for(;p < arrChar + strlen(arrChar); p++){
            printf("%c", *p);
        }
    }


    getchar();
    return 0;
}
