#include <stdio.h>
#include <stdarg.h>

int main(){

	int sum(const int, ...);

	printf("Sum of 10, 20, 30 and 40 is %d\n", sum(4, 10, 20, 30, 40));

}

int sum(const int number, ...){

	va_list args;
	int arg;
	int k, total = 0;

	va_start(args, number);
	for(k = 0;k < number;k ++){
		arg = va_arg(args, int);
		total += arg;
	}
	va_end(args);
	return total;
}