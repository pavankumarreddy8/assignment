#include <stdio.h>

int main() {
    struct simp {
        int i;
        char city[8];
    };
    
    struct simp s1 = { 6, "chennai" };
    
    printf("City: %s\n", s1.city);
    printf("i: %d\n", s1.i);
    
    return 0;
}

