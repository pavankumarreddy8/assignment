#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char *name;
    int age;
} Person;

int main() {
	
    Person *p = (Person *) malloc(sizeof(Person));
    
    p->name = "John";
    p->age = 30;
    
    
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    

    free(p);
    
    return 0;
}

