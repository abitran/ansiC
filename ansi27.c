#include <stdio.h>

int square(const int), cube(const int);

int main(){

	int y, x = 5;
	int (*func) (const int);
	func = square;
	y = func(x);
	printf("Square of %d is %d\n", x, y);

	func = cube;
	y = func(x);
	printf("Cube of %d is %d", x, y);
}

int square (const int x){

	return (x * x);
}

int cube (const int x){

	return ( x * x * x);

}