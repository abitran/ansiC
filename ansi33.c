#include <stdio.h>
#include <ctype.h>

#define ALPHABET	26

#define BLANK		' '
#define PERIOD		'.'
#define NEWLINE		'\n'

int counter[ALPHABET][ALPHABET];

int main(){

	void initialize(void), process(void), display(void);

	initialize();
	process();
	display();
}

void initialize(void){

	int row, col;

	for (row = 0;row < ALPHABET; row++)
		for(col = 0;col < ALPHABET; col++)
			counter[row][col] = 0;
	}

void process(void){

	char thischar, prevchar;

	prevchar = BLANK;
	thischar = getchar();
	while (thischar != PERIOD){
		if (isupper(thischar) && isupper(prevchar))
			counter[prevchar - 'A'][thischar - 'A']++;
		prevchar = thischar;
		thischar = getchar();
	}
}

void display(void){

	int row, col;

	for (row = 0;row < ALPHABET;row++){
		for(col = 0;col < ALPHABET; col++)
			printf("%2d", counter[row][col]);
		putchar(NEWLINE);
	}
}