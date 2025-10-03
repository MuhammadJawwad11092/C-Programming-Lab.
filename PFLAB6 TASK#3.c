#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next, sum = 0;


    printf("Enter the number of terms : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Sequence up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            next = first;
        } else if (i == 2) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
        sum = sum + next;
    }

    printf("\n\nSum of Fibonacci sequence up to %d terms: %d\n", n, sum);

    return 0;
}
