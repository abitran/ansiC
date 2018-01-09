#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node  *next;
}Node;

void traverse(Node *);
void populate(Node *i, int);

int main(int argc, char **argv){

    Node *root;
    populate(root, 7);
    traverse(root);
    return 0;
}

void populate(Node *nodito, int value){
    if(nodito == NULL){
        printf("NODO NULO\n");
        nodito = (Node*) malloc(sizeof(Node));
        nodito->value = value;
        nodito->next = NULL;
    }
    while(nodito->next != NULL)
        nodito = nodito->next;
    
    nodito->next = malloc(sizeof(Node));
    nodito = nodito->next;
    nodito->value = value;
    nodito>next = NULL;
}

void traverse(Node *nodito){
    if(nodito != NULL){
        while(nodito->next != NULL){
            printf("%d\n",nodito->value);
            nodito = nodito->next;
        }
        printf("%d\n",nodito->value);
    }
}
