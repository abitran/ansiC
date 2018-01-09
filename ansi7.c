#include <stdio.h>

int main()
{
	int time;
	int hours, minutes, seconds;
	void input(int *);
	void process(int, int *, int *, int *);
	void output(int, int, int , int);

	input(&time);
	process(time, &hours, &minutes, &seconds);
	output(time, hours, minutes, seconds);

}

void input(int *t)
{
	printf("Enter the time in seconds:");
	scanf("%d", t);

}

void process(int t, int *h, int *m, int *s)
{

	int mins = t / 60;
	*s = t % 60;
	*m = mins % 60;
	*h = mins / 60;

}

void output(int t, int h, int m, int s)
{
	printf("The time %d seconds\n",t);
	printf("converts to %d hours, %d minutes, %d seconds", h, m, s);

}
