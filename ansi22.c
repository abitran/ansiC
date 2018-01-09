#include <stdio.h>

#define BLANK	' '
#define TAB		'\t'
#define NEWLINE	'\n'
#define PERIOD	'.'

int main(){

	int nblank =  0, ntab = 0, nnewline = 0, nother = 0;
	char c;

	while ((c=getchar()) != PERIOD)
		switch (c){
			case BLANK: nblank++; break;
			case TAB: ntab++; break;
			case NEWLINE: nnewline++; break;
			default: nother++; break;
		}
	printf("%d %d %d %d\n", nblank, ntab, nnewline, nother);
}