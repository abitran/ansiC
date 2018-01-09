#include <stdio.h>
#include <stdlib.h>

int main(void){

    int* x;
    int* y;
    x = malloc(sizeof(int));
    *x = 12;
    y = malloc(sizeof(int));
    *y = 45;
    printf("%d\n", *x);
    printf("%d", *y);
}

