#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[50];
    char address[50];
}student;

int main(void){

    student students[3];

    for(int i=0;i<3;i++){
        printf("Enter student name: ");
        scanf("%s", students[i].name);
        printf("\nEnter student address: ");
        scanf("%s", students[i].address);
    }

    printf("\nStudent Name\tAddress\n");
    printf("***********************\n");
    for(int i = 0;i < 3;i++){
        printf("%s\t%s\n",students[i].name, students[i].address);
    }

    return 0;
}

