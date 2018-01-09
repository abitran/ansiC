#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books{
    char title[50];
    char author[50];
    char* subject[100];
    int book_id;
}book;

int main(int argc, char *argv[]){
    struct Books mybooks[10];
    int bookid; 
    strcpy(mybooks[0].title, "Bitranes en la historia");
    strcpy(mybooks[0].author, "Alejandro Bitran");
    strcpy(mybooks[0].subject, "Materia variada de los Bitranes");
    mybooks[0].book_id = 2;

    if (argc < 2){
        printf("Error, debe ingresar el numero del libro\n");
        exit(1);
    }

    bookid = atoi(argv[1]);
    for(int contador=0; contador < 10; contador++){
        if (bookid == mybooks[contador].book_id){
            printf("%s\n", mybooks[contador].title);
            printf("%s\n", mybooks[contador].author);
            printf("%s\n", mybooks[contador].subject);
        }
        else
            printf("Ese libro no existe, codigo erroneo\n");
            exit(1);
    }
    
    return 0;
}

