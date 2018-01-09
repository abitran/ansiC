#include <stdio.h>

int main(){

	int day, month, year;
	int zell;
	int zeller(const int, const int, const int);

	void day_name(const int), moth_name(const int);

	printf("Enter the date as DD/MM/YYYY: ");
	scanf("%2d/%2d/%4d", &day, &month, &year);
	zell = zeller(day, month, year);
	day_name(zell);
	printf("%2d", day);
	moth_name(month);
	printf("%4d\n", year);
}

int zeller(const int day, const int month, const int year){

	int k, y, m, d, c;
	int z;

	k = day;
	y = year;

	if (month < 3){
		m = month + 10;
		y = year - 1;
	}
	else
		m = month - 2;

	d = y % 100;
	c = y / 100;

	z =(26 * m - 2) / 10 + k + d + (d/4) + (c/4) - 2 * c;
	return (z % 7);

}

void day_name(const int d){

	if (d == 0)
		printf(" Sunday ");
	else if (d == 1)
		printf(" Monday ");
	else if (d == 2)
		printf(" Tuesday ");
	else if (d == 3)
		printf(" Wednesday ");
	else if (d == 4)
		printf(" Thursday ");
	else if (d == 5)
		printf(" Friday ");
	else
		printf(" Saturday ");

} 

void moth_name(const int m){
	if (m == 1)
		printf(" January ");
	else if (m == 2)
		printf(" February ");
	else if (m == 3)
		printf(" March ");
	else if (m == 4)
		printf(" April ");
	else if (m == 5)
		printf(" May ");
	else if (m == 6)
		printf(" June ");
	else if (m == 7)
		printf(" July ");
	else if (m == 8)
		printf(" August ");
	else if (m == 9)
		printf(" September ");
	else if (m == 10)
		printf(" October ");
	else if (m == 11)
		printf(" November ");
	else 
		printf(" December ");

}

































