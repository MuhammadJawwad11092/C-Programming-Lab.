#include <stdio.h>
#include <string.h>

int main() {
    int num, largest, smallest, firstInput = 1;
    char choice[10];

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (firstInput) {
            largest = smallest = num;
            firstInput = 0;
        } else {
            if (num > largest)
                largest = num;
            if (num < smallest)
                smallest = num;
        }

        printf("Current largest: %d\n", largest);
        printf("Current smallest: %d\n", smallest);

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") == 0)
            break;
    }

    printf("\n--- Final Result ---\n");
    printf("Largest number entered: %d\n", largest);
    printf("Smallest number entered: %d\n", smallest);

    return 0;
}
