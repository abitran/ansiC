#include <stdio.h>

#define INITIAL 	1
#define MAX 		20
#define ZERO 		0

int main()
{
	int data, sum = ZERO;
	data = INITIAL;
	while (data <= MAX)
		sum += data++;
    printf("The sum of the first 20 integers is %d\n", sum);
}