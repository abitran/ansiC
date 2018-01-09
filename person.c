#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char *name;
    int age;
    int height;
    int weight;
}Person;

struct Person *Person_create(char *name, int age, int height, int weight){
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who){
    assert(who != NULL);
    free(who->name);
    free(who);
}

int main(int argc, char *argv[]){
    struct Person *joe = Person_create("Bitran 1", 40, 72, 180);
    struct Person *frank = Person_create("Bitran 2", 42, 89, 234);

    printf("Joe is at memory location %p:\n", joe);
    
    Person_destroy(joe);
    Person_destroy(frank);
}
