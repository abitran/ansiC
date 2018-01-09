#include <stdio.h>

double square(const double);
void tabulate(double (*)(const double), const double, const double, const double);

int main(){

	tabulate(square, 0.0, 2.0, 0.1);
}

void tabulate(double (*f)(const double), const double lower, const double upper, const double increment){

	double x;

	for( x = lower; x <= upper + 0.5 * increment; x += increment)
		printf("%6.2f %10.4f\n", x, f(x));
}

double square(const double x){

	return (x * x);
}
