#include <stdio.h>

#define LINE	"__________________________________"\
                "__________________________________"

int main(){

	int account_number;
	int number_of_transaction;
	int credit_total, debit_total;
	int transaction_value;
	int balance;

	void print_headers(const int, const int), process_transaction(const int, const int,
		int *const, int *const, int *const), print_sumary(const int, const int, const int);

	credit_total = debit_total = 0;

	scanf("%d %d", &account_number, &balance);
	print_headers(account_number, balance);

	scanf("%d", &transaction_value);
	number_of_transaction = 1;

	while (transaction_value != 0){
		process_transaction(number_of_transaction, transaction_value, &credit_total, &debit_total, &balance);
		scanf("%d", &transaction_value);
		number_of_transaction++;
	}
	print_sumary(credit_total, debit_total, balance);
}

void print_headers(const int number, const int balance){

	printf("\t\t\tBank Statement\n\n");
	printf("Account Number: %6d\n\n", number);
	printf("Transaction    Credit   Debit   Balance\n");
	printf("%s\n", LINE);
	printf("\t\t\t\t\t\t%8d\n", balance);
}

void process_transaction(const int number, const int transaction, int *const credit, int *const debit, int *const balance){

	*balance = *balance + transaction;
	if (transaction > 0){
		*credit = *credit + transaction;
		printf("%8d\t%8d\t\t\t%8d\n", number, transaction, *balance);
	}else{
		*debit = *debit - transaction;
		printf("%8d\t\t\t%8d\t%8d\n", number, -transaction, *balance);

	   }
	}

void print_sumary(const int credit, const int debit, const int balance){
	
	printf("%s\n", LINE);
	printf("Totals\t\t%8d\t%8d\t%8d\n", credit, debit, balance);
}

