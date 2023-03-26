#include <stdio.h>

int main() {
    char lowercase, uppercase;
    
    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);
    
    uppercase = lowercase - 32;  // ASCII value difference between lowercase and uppercase letters
    
    printf("The uppercase letter is: %c", uppercase);
    
    return 0;
}

