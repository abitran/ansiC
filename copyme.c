#include <stdio.h>
#include <string.h>

int main(void){

    char *s = "Hola como te va??";

    for(int i = 0, n = strlen(s);i < n;i++)
        printf("%c\n", *(s + i));
    }

