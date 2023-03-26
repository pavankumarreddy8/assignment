#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int number;
    char grade;
};

int main() {
    int num_students;
    struct Student students[MAX_STUDENTS];
    int num_A = 0, num_B = 0, num_C = 0, num_D = 0, num_F = 0;

    printf("Enter No. Students: ");
    scanf("%d", &num_students);

    // read student information
    for (int i = 0; i < num_students; i++) {
        printf("Enter Student %d Number, Grade: ", i+1);
        scanf("%d %c", &students[i].number, &students[i].grade);
        
        // update grade counters
        switch (students[i].grade) {
            case 'A':
                num_A++;
                break;
            case 'B':
                num_B++;
                break;
            case 'C':
                num_C++;
                break;
            case 'D':
                num_D++;
                break;
            case 'F':
                num_F++;
                break;
            default:
                printf("Invalid grade entered: %c\n", students[i].grade);
                break;
        }
    }

    // print student details and grade totals
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d details:\n", i+1);
        printf("Number: %d\n", students[i].number);
        printf("Grade: %c\n", students[i].grade);
        printf("Total no. A: %d, B: %d, C: %d, D: %d, F: %d\n", num_A, num_B, num_C, num_D, num_F);
    }

    return 0;
}

