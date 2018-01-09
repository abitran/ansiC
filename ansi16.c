#include <stdio.h>

#define GROUP_TRAILER	0
#define FILE_TRAILER	9

int main()
{
	int grand_total;
	int group_total;
	int group_no, current_group_no;
	int identification;
	int raw, percent;

	grand_total = 0;
	printf("\t\t\tPROJECT REPORT\n\n");

	while (scanf("%d %d %d", &group_no, &identification, &raw), group_no != FILE_TRAILER){
		printf("PROJECT GROUP %2d\n", group_no);
		printf("\t\tIDENTIFICATION\tRAW\t\tPERCENTAGE\n");
		printf("\t\tNUMBER\t\tMARK (/80)\tMARK\n");
		current_group_no = group_no;
		group_total = 0;
		do{
			percent = raw * 100 / 80;
			printf("\t\t%4d\t\t%2d\t\t%3d\n", identification, raw, percent);
			group_total += percent;
			scanf("%d %d %d", &group_no, &identification, &raw);
		}while(group_no != GROUP_TRAILER);

		printf("\tGROUP %2d TOTAL\t\t\t %6d\n\n", current_group_no, group_total);
		grand_total += group_total;
	}

	printf("GRAND TOTAL\t\t\t\t %6d\n\n", grand_total);
}