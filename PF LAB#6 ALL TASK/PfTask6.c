#include <stdio.h>

int main() {
    int grade;
    int count = 0, above70 = 0, between50and70 = 0, below50 = 0;
    float sum = 0.0;

    printf("Enter student grades (0-100). Type -1 to stop.\n");

 
    while (1) {
        printf("Enter grade: ");
        scanf("%d", &grade);

     
        if (grade == -1) {
            break;
        }

 
        if (grade < 0 || grade > 100) {
            printf("Invalid grade! Please enter a value between 0 and 100.\n");
            continue;
        }


        printf("You entered: %d\n", grade);

       
        sum += grade;
        count++;

        if (grade > 70) {
            above70++;
        } else if (grade >= 50) {
            between50and70++;
        } else {
            below50++;
        }
    }

 
    if (count > 0) {
        float average = sum / count;
        printf("\n--- Grade Summary ---\n");
        printf("Total grades entered: %d\n", count);
        printf("Average grade: %.2f\n", average);
        printf("Grades above 70: %d\n", above70);
        printf("Grades between 50 and 70: %d\n", between50and70);
        printf("Grades below 50: %d\n", below50);
    } else {
        printf("\nNo grades entered.\n");
    }

    return 0;
}
