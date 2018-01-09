#include <stdio.h>
#include <math.h>

int main()
{

	float a, b, c;
	float triangle(const float, const float, const float);
	printf("Enter lengths of sides:");
	scanf("%f %f %f", &a, &b, &c);
	printf("Area of triangle is %6.2f\n", triangle(a, b, c));

}

float triangle(const float x, const float y, const float z)
{
	float s;
	s = (x + y + z) / 2.0;
	return (sqrt(s * (s-x) * (s-y) * (s-z)));
}