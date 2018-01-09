#include <stdio.h>
#define TRUE		1
#define ISLEAP(Y)	((Y) % 4 == 0 && (Y) % 100 != 100 || (Y) % 400 == 0)

typedef int 		Day;
typedef int 		Month;
typedef int 		Year;
typedef int 		Daynumber;
typedef int			Daysinmonth;
typedef int			Boolean;

int main(){

	Day day;
	Month month, m;
	Year year;
	Daynumber daynumber;
	Daysinmonth daysinmonth (const Month, const Year);

	scanf("%2d/%2d/%4d", &day, &month, &year);
	daynumber = 0;
	for (m = 1; m < month; m++)
		daynumber += daysinmonth (m, year);
	daynumber += day;

	printf("%2d/%2d/%4d is daynumber %d\n", day, month, year, daynumber);
}

Daysinmonth daysinmonth (const Month month, const Year year){

	switch (month){
		case 4: case 6:
		case 9: case 11:
			return (30);

		case 2:
			if (ISLEAP(year))
				return (29);
			else
				return (28);
		default:
			return (31);
	}
}