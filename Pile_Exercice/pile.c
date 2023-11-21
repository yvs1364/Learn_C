#include <stdlib.h>
#include <stdio.h>

typedef struct Element Element;
typedef struct Pile Pile;

#define PRESENT(pile, element)({        \
 if(pile == NULL || element == NULL){   \
        exit(EXIT_FAILURE);             \
    }                                   \
})                                      \

struct Element{
    int data;
    Element *next;
};

struct Pile{
    /* Struct de controle */
    Element *first;
};

Pile *init();
void insert(Pile *pile, int newData);
int pop(Pile *pile);
void showPile(Pile *pile);

int main(){
    Pile *myPile = init();
    insert(myPile, 10);
    for(int i =0; i<15;i++){
        insert(myPile, i+17);
    }
    showPile(myPile);
    printf("--------------------------------\n");
    printf("La valeur %d a ete enleve de la pile\n", pop(myPile));
    printf("--------------------------------\n");
    showPile(myPile);

    return 0;
}

Pile *init(){
    Pile *pile = malloc(sizeof(*pile));
    Element *element = malloc(sizeof(*element));

    PRESENT(pile, element);
    element->data = 0;
    element->next = NULL;
    pile->first = element;

    return pile;
}


void insert(Pile *pile, int newData){
    Element *newElement = malloc(sizeof(*newElement));
    PRESENT(pile, newElement);
    newElement->data = newData;
    newElement->next = pile->first;
    pile->first = newElement;
}

int pop(Pile *pile){
    /* LIFO */
    int removedData = 0;
    Element *elementData = pile->first;
    if(pile == NULL){
        exit(EXIT_FAILURE);
    }
    if(pile !=NULL && pile->first != NULL){
        removedData = elementData->data;
        pile->first = elementData->next;
        free(elementData);
    }

    return removedData;
}


void showPile(Pile *pile){
    if(pile == NULL){
        exit(EXIT_FAILURE);
    }

    Element *current = pile->first;
    printf("|-----------------------|\n");
    printf("|          Pile         |\n");
    printf("|-----------------------|\n");
    while(current!=NULL){
        if(current->data >=0 && current->data <=9){
            printf("|Value         |%d       |\n",current->data);
            printf("|-----------------------|\n");
        }
        else if(current->data >=10 && current->data <=99){
            printf("|Value         |%d      |\n",current->data);
            printf("|-----------------------|\n");
        }else{
            printf("|Value         |%d     |\n",current->data);
            printf("|-----------------------|\n");
        }

        current = current->next;
    }
    printf("|Value         |NULL    |\n");
    printf("|-----------------------|\n");

}