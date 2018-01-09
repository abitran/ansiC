#include <stdio.h>
#include <stdlib.h>

#define FOREVER for(;;)

typedef void(*Pfv)(int *const, int *const, int *const);


void 	stop(int *const, int *const, int *const),
		date_in(int *const, int *const, int *const), 
		date_out(int *const, int *const, int *const), 
		day_out(int *const, int *const, int *const);

int menu(void);
int zeller(const int, const int, const int);

Pfv selection[] = {stop, date_in, date_out, day_out};

int main(){

	int day, month, year;
	int choice;

	FOREVER{
		choice = menu();
		if (0 <= choice && choice <= 3)
			selection[choice](&day, &month, &year);
		else
			printf("\n\nUnknown selection");
	}
}

void date_in(int *const day, int *const month, int *const year){

	printf("\nEnter the date as DD/MM/YYYY: ");
	scanf("%2d/%2d/%4d", day, month, year);

}

void date_out(int *const day, int *const month, int *const year){

	static char *day_name[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	printf("\n\nDay is: %s\n", day_name[zeller(*day, *month, *year)]);
}

int zeller(const int day, const int month, const int year){

	int k, y, m, d, c, z;

	k = day;
	y = year;
	if (month < 3){
		m = month + 10;
		y = year - 1;
	} else
		m = month - 2;
	d = y % 100;
	c = y / 100;

	z = (26 * m - 2)/10 + k + d + (d/4) + (c/4) - 2 * c;
	return (z % 7);

}

void stop(int *const day, int *const month, int *const year){

	printf("\n\nProgram closing\n");
	exit(0);
}

int menu(void){

	int k, choice;

	for(k = 0;k < 24;k++)
		printf("\n");

	printf("\t\tMAIN MENU\n\n\n");
	printf("\t\t\t0 Exit\n");
	printf("\t\t\t1 Date in\n");
	printf("\t\t\t2 Date out\n");
	printf("\t\t\t3 Day out\n\n\n\n\n");

	printf("Enter selection: ");
	scanf("%d", &choice);
	return choice;
}





