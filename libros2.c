#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books{
    char title[50];
    char author[50];
    char subject[100];
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
    if (bookid == Book1.book_id){
        printf("%s\n", Book1.title);
        printf("%s\n", Book1.author);
        printf("%s\n", Book1.subject);
    }
    else if (bookid == Book2.book_id){
        printf("%s\n", Book2.title);
        printf("%s\n", Book2.author);
        printf("%s\n", Book2.subject);
    }
    else
        printf("Ese libro no existe, codigo erroneo\n");
    
    return 0;
}

