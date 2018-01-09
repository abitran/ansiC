#include <stdio.h>

#define NUMLINES	5
#define BLANK		' '
#define ASTERISK	'*'
#define NEWLINE		'\n'

int main()
{
	int line, leading_blanks, stars;

	line = 1;
	while(line <= NUMLINES)
	{
		leading_blanks = 1;
		while(leading_blanks++ <= NUMLINES - line)
			putchar(BLANK);
		stars = 1;
		while(stars++ <= 2 * line - 1)
			putchar(ASTERISK);

	    putchar(NEWLINE);
	    line ++;
	}
}