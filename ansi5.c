#include <stdio.h>

int main()
{
	int hours, minutes, seconds;
	int time;
	void hms_time(int *, int, int, int);

	scanf("%d %d %d", &hours, &minutes, &seconds);
	hms_time(&time, hours, minutes, seconds);
	printf("Converted time is %d", time);

}

void hms_time(int *t, int hours, int minutes, int seconds)
{
	*t = (60 * hours + minutes) * 60 + seconds;
	
}