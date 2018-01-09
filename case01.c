#include <stdio.h>
#include "pd1.h"
#include "date.h"

PROGRAM
BEGIN
	int day, month, year;

	printf("Enter the date as DD/MM/YYYY: ");
	scanf("%2d/%2d/%4d", &day, &month, &year);

	set_date(day, month, year);
	print_day_name();
	print_day_number();
	print_month_name();
	print_month_number();
	print_year_number();
	printf("\n");
END
