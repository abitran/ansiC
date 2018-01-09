#include <stdio.h>

#define JAN		1
#define FEB		2
#define MAR		3
#define APR		4
#define MAY		5
#define JUN		6
#define JUL		7
#define AUG		8
#define SEP		9
#define OCT		10
#define NOV		11
#define DEC		12

int main(){

	int day, month;
	void tomorrow(int *const, int *const);

	printf("Enter today's date: ");
	scanf("%d %d", &day, &month);
	tomorrow(&day, &month);
	printf("Tomorrow's date is %d %d\n", day, month);

}

void tomorrow(int *const d, int *const m){

	int days_in_month;

	switch(*m){
		case APR:
		case JUN:
		case SEP:
		case NOV: days_in_month = 30; break;
		case FEB: days_in_month = 28; break;
		default: days_in_month = 31; break;
	}

	if (*d == days_in_month){
		*d = 1;
		if (*m == DEC)
			*m = JAN;
		else
			(*m)++;
	} 
	else
		(*d)++;

	}