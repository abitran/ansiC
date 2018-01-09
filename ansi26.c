#include <stdio.h>

#define	SATADJUSTMENT		1.5
#define SUNADJUSTMENT		2.0

enum weekday {SUN, MON, TUE, WED, THU, FRI, SAT};
typedef enum weekday Weekday;

typedef int 	Hours;
typedef float 	Rates;
typedef float	Wages;

int main(){

	Hours hours;
	Rates baserate, rate;
	Wages wages;
	Weekday day;
	Weekday tomorrow(const Weekday);

	printf("Enter the basic hourly rate: ");
	scanf("%f", &baserate);

	wages = 0.0;
	printf("Enter the hours worked\n");
	printf("for Monday through Sunday: ");
	day = SUN;
	do{
		day = tomorrow(day);
		scanf("%d", &hours);

		switch (day){
			case MON: case TUE:
			case WED: case THU: case FRI:
				rate = baserate;	break;

			case SAT:
				rate = SATADJUSTMENT * baserate; 	break;
			case SUN:
				rate = SUNADJUSTMENT * baserate;	break;
		}
		wages += rate * hours;
	} while (day != SUN);
	
	printf("Total wages for the week: %8.2f\n", wages);

}

Weekday tomorrow(const Weekday d){

	switch (d){
		case SUN: return MON;
		case MON: return TUE;
		case TUE: return WED;
		case WED: return THU;
		case THU: return FRI;
		case FRI: return SAT;
		case SAT: return SUN;
	}
}