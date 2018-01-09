#include <stdio.h>

#define TABLESIZE		100

#define SWAP(X,Y)		{int temp = (X); (X) = (Y); (Y)=temp;}

int main(){

	int size;
	int table[TABLESIZE];
	int input(int[], const int);
	void sort(int[], const int), output(const int[], const int);

	if((size = input(table, TABLESIZE)) > TABLESIZE)
		printf("Too many elements, max is %d\n", TABLESIZE);
	else{
		sort(table, size);
		output(table, size);
	}
}

int input(int table[], const int limit){

	int size;
	int k;

	printf("Enter number of data items: ");
	scanf("%d", &size);

	if(size > limit)
		return (size);

	for(k = 0;k < size; k++)
		scanf("%d", &table[k]);
}

void sort(int table[], const int size){

	int i, j;
	for(i = size - 1;i > 0;i--)
		for(j = 0;j < i;j++)
			if(table[j] > table[j+1])
				SWAP(table[j], table[j+1]);
}

void output(const int table[], const int size){

	int k;
	printf("Sorted list:\n");

	for(k = 0;k < size;k++)
		printf("%5d\n", table[k]);
}

