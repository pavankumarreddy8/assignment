#include <stdio.h>

// function to calculate HCF/GCF of two numbers
int calculate_hcf(int num1, int num2) {
    int smaller_num = (num1 < num2) ? num1 : num2;
    int hcf = 1;
    
    for (int i = 1; i <= smaller_num; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    return hcf;
}

int main() {
    int num1, num2, hcf;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    hcf = calculate_hcf(num1, num2);
    
    printf("The HCF/GCF of %d and %d is %d.\n", num1, num2, hcf);
    
    return 0;
}

