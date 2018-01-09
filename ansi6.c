#include <stdio.h>

int main()
{
	int time;
	int hours, minutes, seconds;
	void time_hms(int , int *, int *, int *);
	printf("Enter the time in seconds:");
	scanf("%d", &time);
	time_hms(time, &hours, &minutes, &seconds);
	printf("The time %d seconds\n", time);
	printf("converts to %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

}

void time_hms(int t, int *h, int *m, int *s)
{
	int temp = t / 60;
	*s = t % 60;
	*m = temp % 60;
	*h = temp / 60;

}