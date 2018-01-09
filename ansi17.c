#include <stdio.h>

int main(){

	float first, second;

	scanf("%f %f", &first, &second);
	if (first < second)
		printf("%f %f\n", first, second);
	else
		printf("%f %f\n", second, first);
}
