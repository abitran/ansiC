#include <stdio.h>

int main()
{
	int invoice, quantity;
	float unitprice;
	float total_price(const int, const float);
	printf("Enter invoice NUMBER:");
	scanf("%d", &invoice);
	printf("\nEnter quantity:");
	scanf("%d", &quantity);
	printf("\nEnter unit price:");
	scanf("%f", &unitprice);

	printf("\nINVOICE\tQUANTITY\tUNIT PRICE\tTOTAL\n");
	printf("%d \t %d \t \t %.2f \t \t %.2f", invoice, quantity, unitprice, total_price(quantity, unitprice));
}

float total_price(const int q, const float up)
{
	return(q * up);
}