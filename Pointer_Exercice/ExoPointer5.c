#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ecrire un programme C qui définit une structure permettant de stocker le nom, le prénom et l'âge d'une personne. OK
Lit ensuite ces informations pour deux personnes et affiche le nom complet de la moins âgée d'entre
elles en utilisant une seule fonction printf pour l'affichage du résultat. */

struct Person{
    char firstname[26];
    char lastname[26];
    int age;
};

int main(){
    int nbrPerson = 2;
    struct Person *pPerson1, *pPerson2, person1, person2;
    pPerson1 = &person1;
    pPerson2 = &person2;

    printf("Entrer les informations de la premiere personne\n");
    printf("Entrer le prenom : ");
    scanf("%s",pPerson1->firstname);
    getchar();
    printf("Entrer le nom : ");
    scanf("%s",pPerson1->lastname);
    getchar();
    printf("Entrer l'age : ");
    scanf("%d",&pPerson1->age);
    getchar();

    printf("\nEntrer les informations de la deuxieme personne\n");
    printf("Entrer le prenom : ");
    scanf("%s",pPerson2->firstname);
    printf("Entrer le nom : ");
    scanf("%s",pPerson2->lastname);
    printf("Entrer l'age : ");
    scanf("%d",&pPerson2->age);

    if(pPerson1->age < pPerson2->age){
        printf("La personne la moins agee: %s %s.\n",pPerson1->firstname, pPerson1->lastname);
    } else {
        printf("La personne la moins agee: %s %s.\n",pPerson2->firstname, pPerson2->lastname);
    }
    return 0;
}
