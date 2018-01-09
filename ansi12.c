#include <stdio.h>

#define PERIOD '.'

int main()
{
	char c;
	c = getchar();
	while (c != PERIOD)
	{
		putchar(c);
		c = getchar();
	}

}