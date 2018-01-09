#include <stdio.h>

int main()
{
	int val1, val2;
	void swap(int *, int *);
	printf("Enter the values:");
	scanf("%d %d", &val1, &val2);
	printf("\nYou entered val1=%d and val2=%d", val1, val2);
	swap(&val1, &val2);
	printf("\nThe new swapped values are: val1=%d and val2=%d", val1, val2);

}

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}