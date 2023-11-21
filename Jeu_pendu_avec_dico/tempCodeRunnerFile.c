//initialisation du tableau pUserWord
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