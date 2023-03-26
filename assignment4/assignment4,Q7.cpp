#include <stdio.h>

struct person {
    char name[20];
    int age;
};

int main() {
    struct person p1 = {"John", 30};
    struct person *ptr = &p1;
    
    // Accessing structure members using the dot operator
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    
    // Accessing structure members using the pointer and arrow operator
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    
    return 0;
}

