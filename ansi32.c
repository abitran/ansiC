#include <stdio.h>

#define TABLESIZE	100
#define SWAP(X,Y)	{int temp = (X); (X) = (Y); (Y) = temp;}

int main(){

	int size;
	int i, j;
	int table[TABLESIZE];

	printf("Enter the number of data values: ");
	scanf("%d", &size);

	if (size > TABLESIZE)
		printf("Too many elements, max is %d\n", TABLESIZE);
	else {
		for (i = 0;i < size; i++){
			printf("data item %3d: ", i);
			scanf("%d", &table[i]);
		}

		for (i = size - 1; i > 0; i--)
			for (j = 0;j <= i - 1; j++)
				if (table[j] > table[j+1])
					SWAP(table[j], table[j+1]);

		for (i = 0;i < size;i++)
			printf("data itm %3d: %5d\n", i, table[i]);
	}
}