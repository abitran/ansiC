#include <stdio.h>

int main(){

	float cms;
	printf("Enter length in cetimeters:");
	float convertme(const float);
	scanf("%f", &cms);
	printf("%.2f centimeters are equivalent to %.2f inches", cms, convertme(cms));

}

float convertme(const float centimeters)
{
	return (centimeters / 2.54);
}