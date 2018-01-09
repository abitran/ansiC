#include <stdio.h>
#include "pd1.h"
#include "visible.h"

PRIVATE int zeller(void);

#define SUNDAY		0
#define MONDAY		1
#define TUESDAY		2
#define WEDNESDAY	3
#define THURSDAY	4
#define FRIDAY		5
#define SATURDAY	6

#define JANUARY		1
#define FEBRUARY	2
#define MARCH		3
#define APRIL		4
#define MAY 		5
#define JUNE		6
#define JULY		7
#define AUGUST		8
#define SEPTEMBER	9
#define OCTOBER		10
#define NOVEMBER	11
#define DECEMBER	12

#define CASE(NAME)	WHEN(NAME) printf(" " #NAME); break

PRIVATE int day = 1;
PRIVATE int month = 1;
PRIVATE int year = 1;

EXPORT PROCEDURE set_date(const int d, const int m, const int y)
BEGIN
	day = d;
	month = m;
	year = y;
END

PRIVATE int zeller(void)
BEGIN
	int k = day;
	int y = year;
	int m, d, c;

	IF month < 3
	THEN
		m = month + 10;
		y = year - 1;
	ELSE
		m = month - 2;
	ENDIF

	d = y % 100;
	c = y / 100;
	return (((26 * m - 2) / 10 + k + d + (d/4) + (c/4) - 2 * c) % 7);
END

EXPORT PROCEDURE print_day_name(void)
BEGIN
	int zell = zeller();

	SWITCH zell TO:
		CASE(SUNDAY):
		CASE(MONDAY):
		CASE(TUESDAY):
		CASE(WEDNESDAY):
		CASE(THURDAY):
		CASE(FRIDAY):
		CASE(SATURDAY):
	ENDSWITCH

	EXPORT PROCEDURE print_day_number(void)
	BEGIN
		printf(" %2d", day);
	END

EXPORT PROCEDURE print_month_name(void)
BEGIN
	SWITCH month TO
		CASE(JANUARY):
		CASE(FEBRUARY):
		CASE(MARCH):
		CASE(APRIL):
		CASE(MAY): 	
		CASE(JUNE):	
		CASE(JULY):		
		CASE(AUGUST):		
		CASE(SEPTEMBER):	
		CASE(OCTOBER):	
		CASE(NOVEMBER):	
		CASE(DECEMBER):	
	ENDSWITCH
END

EXPORT PROCEDURE print_year_number(void)
BEGIN
	printf("%4d", year);
END



































