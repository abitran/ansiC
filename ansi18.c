#include <stdio.h>

#define PERIOD	'.'
#define BLANK	' '
#define TAB		'\t'
#define NEWLINE	'\n'

#define FALSE	0
#define TRUE	1

int main(){

	char c;
	int words = 0;
	int inword = FALSE;

	while((c = getchar()) != PERIOD)
		if(c == BLANK || c == TAB || c == NEWLINE)
			inword = FALSE;
		else if (! inword){
			inword = TRUE;
			words++;
		}
	printf("Number of words is %d\n", words);
}