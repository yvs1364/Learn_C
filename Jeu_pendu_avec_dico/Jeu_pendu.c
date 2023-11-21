#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000

char readChar() {
    char character = 0;
    printf("\nPropoer une lettre : ");
    character = getchar();
    character = toupper(character);

    while(getchar() != '\n'); // Lis les autres caract�re jusqu'� la fin
    return(character);
}

int charCompare(char* secretW, char* userW){
    int flag=0,i=0;
    while(secretW[i]!='\0' && userW[i]!='\0'){
       if(secretW[i]!=userW[i]){
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    char*   secretWord[MAX];
    char*   pUserWord;
    char    letter;
    int     numbOfchance= 10;

    FILE*   file = NULL;

    file = fopen("dico.txt","r");

    if(file != NULL){
        while(fgets(secretWord, MAX, file) != NULL){
            printf("%s", secretWord);
        }
    }else{
        printf("Error fichier introuvable");
    }
    int     lenSecretWord = strlen(secretWord);
    printf("\n%i",lenSecretWord);



    // //initialisation du tableau pUserWord
    // pUserWord = malloc(sizeof(char)*(lenSecretWord + 1));
    // for(int j=0;secretWord[j]!='\0';++j){
    //     pUserWord[j]='*';
    // }

    // pUserWord[strlen(pUserWord)-1] = '\0'; // Initialise le dernier charactère en \0 pour annoncer la fin de la string

    // printf("Bienvenu dans le jeu du pendu\n");
    // while(numbOfchance > 0) {
    //        if(charCompare(secretWord, pUserWord) == 0){
    //             break;
    //         }else{
    //             printf("\nIl vous reste %i d'essaie !\n", numbOfchance);
    //             printf("Le mot a trouver est : ");
    //             printf("%s",pUserWord);
    //             letter = readChar();
    //             for(int j=0;j<lenSecretWord;j++){
    //                 if(letter==secretWord[j]){
    //                     pUserWord[j] = letter;
    //                 }
    //             }
    //         }
    //     numbOfchance--;
    // };
    // if(numbOfchance == 0){
    //     printf("\nPerdu le mot etait : %s", secretWord);
    // }else{
    //     printf("\nGagne le mot est bien : %s", secretWord);
    // }
    // free(pUserWord);
    fclose(file);
    return 0;
}
