#include "pd1.h"
#include "visible.h"

#ifndef		DATE
	#define DATE

	IMPORT PROCEDURE set_date(const int d, const int m, const int y);
	IMPORT PROCEDURE print_day_name(void);
	IMPORT PROCEDURE print_day_number(void);
	IMPORT PROCEDURE print_month_name(void);
	IMPORT PROCEDURE print_month_number(void);
#endif

