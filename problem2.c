#include <stdio.h>
#include <stdlib.h>

int computediff(int [], int [], int);
int dispatcher(int [], int [], int);

int main(int argc, char **argv){

    int A[] = {10,22,33,48};
    int B[] = {11,25,-10,34};
    int size = sizeof(A)/sizeof(int);
    printf("%d\n",dispatcher(A, B, size));
        
}

int computediff(int A[], int B[], int size){
    int i;
    int diff = 0;

    for(i=0;i<size;i++)
        diff += abs(A[i]-B[i]);
    
    return diff;
}

int dispatcher(int A[], int B[], int size){
    if(size == 0)
        return 0;
    int lastelementdiff = abs(A[size-1] - B[size - 1]);
    int diff = computediff(A, B, size -1);
    return diff;
}
