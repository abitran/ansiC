#include <stdio.h>

int main(void){

    int x = 1;
    int y = 2;

    void swap(int*, int*);

    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
}

void swap(int* n, int* m){

    int tmp = *n;
    *n = *m;
    *m = tmp;
}

    
