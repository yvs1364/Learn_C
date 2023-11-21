#include <stdlib.h>
#include <stdio.h>

typedef struct Element Element;
typedef struct File File;

#define PRESENT(file, element)({        \
 if(file == NULL || element == NULL){   \
        exit(EXIT_FAILURE);             \
    }                                   \
})                                      \

struct Element{
    int data;
    Element *next;
};

struct File{
    /* Struct de controle */
    Element *first;
};

File *init();
void showFile(File *file);
void insertFile(File *file, int newDat);
int pop(File *file);

int main(){
    File *myFile = init();
    printf("File initialised\n");
    showFile(myFile);
    printf("--------------------------------\n");
    for(int i=0; i<10;i++){
        insertFile(myFile, i +17);
    }
    showFile(myFile);
    printf("--------------------------------\n");
    printf("Defile %d\n",pop(myFile));
    printf("Defile %d\n",pop(myFile));
    printf("Defile %d\n",pop(myFile));
    printf("Defile %d\n",pop(myFile));
    printf("--------------------------------\n");
    printf("Nouvel etat de la file\n");
    showFile(myFile);
    return 0;
}

File *init(){
    File *file = malloc(sizeof(*file));
    Element *element = malloc(sizeof(*element));

    PRESENT(file, element);
    element->data = 0;
    element->next = NULL;
    file->first = element;

    return file;
}

void insertFile(File *file, int newData){
    Element *newElement = malloc(sizeof(*newElement));
    PRESENT(file, newElement);
    newElement->data = newData;
    newElement->next = NULL;
    if(file->first !=NULL){
        Element *actualElement = file->first;
        while(actualElement->next != NULL){
            actualElement = actualElement->next;
        }
        actualElement->next = newElement;
    }
}

int pop(File *file){
    /* FIFO */
    int removedData = 0;
    Element *elementData = file->first;
    if(file == NULL){
        exit(EXIT_FAILURE);
    }
    if(file->first != NULL){
        removedData = elementData->data;
        file->first = elementData->next;
        free(elementData);
    }

    return removedData;
}

void showFile(File *file){
    Element *current = file->first;

    if(file==NULL)  { exit(EXIT_FAILURE); }

    printf("File : [");
    while(current != NULL){
        printf("%d -> ",current->data);
        current = current->next;
    }
    printf("NULL]\n");

}

