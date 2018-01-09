#include <stdio.h>
#include <ctype.h>

#define PERIOD '.'

int main(){

	char c;
	int lowercase, uppercase, digits, others;

	lowercase = uppercase = digits = others = 0;
	while((c = getchar()) != PERIOD){
		if (islower(c))
			lowercase++;
		else if (isupper(c))
			uppercase++;
		else if (isdigit(c))
			digits++;
		else{
			others++;
		}
	}

	printf("\nLOWERS %d", lowercase);
	printf("\nUPPERS %d\n", uppercase);
	printf("\nDIGITS %d\n", digits);
	printf("\nOTHERS %d", others);

}