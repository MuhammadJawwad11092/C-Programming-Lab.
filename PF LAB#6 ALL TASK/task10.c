#include <stdio.h>
#include <string.h>

int main() {
    int num, sum = 0;
    char choice[10];

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        sum += num;
        printf("Running total: %d\n", sum);

        printf("Do you want to enter another number? (yes/no): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") == 0)
            break;
    }

    printf("\nFinal sum of all entered numbers: %d\n", sum);

    return 0;
}
