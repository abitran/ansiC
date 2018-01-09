#include <stdio.h>
#include <stdbool.h>

bool evalconditions(int, int, int);

int main(int argc, char **argv){

    int i, j, k;
    int max_number;
    int count = 0;
    printf("Please enter the max range of numbers: ");
    scanf("%d",&max_number);
    printf("======== PERMUTATIONS ========\n");
    for(i = 1;i < max_number;i++)
        for(j = 1;j < max_number;j++)
            for(k = 1;k < max_number;k++)
                if(evalconditions(i, j, k) == true){
                    count ++;
                    printf("%d - %d - %d\n",i, j, k);
                }
     printf("\nTotal count of permutations: %d", count);
     return 0;
}

bool evalconditions(int fire, int police, int amb){
    if((police % 2 == 0) && (police != fire) && (fire != amb) && (police != amb) && 
            (fire + police + amb == 12))
        return true;
}

            


