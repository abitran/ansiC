#include <stdio.h>

int main()
{
	int hours, minutes, seconds;
	int time;
	int hms_time(int, int, int);

	printf("Enter the time:");
	scanf("%d %d %d", &hours, &minutes, &seconds);
	time = hms_time(hours, minutes, seconds);
	printf("Converted time is %d seconds\n", time);

}

int hms_time(int h, int m, int s)
{
	int t;
	t = (60 * h + m) * 60 + s;
	return(t);
}