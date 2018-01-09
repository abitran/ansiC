#include <stdio.h>

#define ZERO 0.0

int main()
{
	float data, sum = ZERO;
	scanf("%f", &data);
	while (data >= ZERO)
	{
		sum += data;
		scanf("%f", &data);

	}
	printf("The sum is %.2f\n", sum );
}