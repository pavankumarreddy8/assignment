#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 50

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    struct employee emp[MAX_EMPLOYEES];
    int n, i, highest_salary_index = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Accept details of all employees
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Enter employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Enter employee name: ");
        scanf("%s", emp[i].ename);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find the index of the employee with the highest salary
    for (i = 1; i < n; i++) {
        if (emp[i].salary > emp[highest_salary_index].salary) {
            highest_salary_index = i;
        }
    }

    // Display details of the employee with the highest salary
    printf("\nDetails of the employee with the highest salary:\n");
    printf("Employee number: %d\n", emp[highest_salary_index].eno);
    printf("Employee name: %s\n", emp[highest_salary_index].ename);
    printf("Employee salary: %.2f\n", emp[highest_salary_index].salary);

    return 0;
}

