#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char* name;
    char* address;
}student;

int main(void){

    student students[3];
    char nombre[50];
    char direccion[50];

    for(int i=0;i<3;i++){
        printf("Enter student name: ");
        scanf("%s", nombre);
        students[i].name = malloc(sizeof(nombre)*2);
        strcpy(students[i].name, nombre);
        free(students[i].name);
        printf("\nEnter student address: ");
        scanf("%s", direccion);
        students[i].address = malloc(sizeof(direccion)*2);
        strcpy(students[i].address, direccion);
        free(students[i].address);
    }

    printf("\nStudent Name\tAddress\n");
    printf("***********************\n");
    for(int i = 0;i < 3;i++){
        printf("%s\t%s\n",students[i].name, students[i].address);
    }

    return 0;
}

