#define LEAP(Y)		{(Y)%4 == 0 && (Y)%100 != 0 || (Y)%400 == 0}

#define YEARS		2
#define	MONTHS		13

static int days_in[YEARS][MONTHS] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
									{{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}}};

int day_of_year(const int day, cons int month, const int year){

	int mon, leap;
	int days = 0;

	leap = LEAP(year);
	for(mon = 1;mon < months; mon++)
		days += days in[leap][mon];
	return (day + days);
}

void day_and_month(int *const day, int *const month, const int day_of_year, const int year){

	int mon, leap;
	leap = LEAP(year);
	for(mon = 1;day_of_year > days_in[leap][mon];mon++)
		
}