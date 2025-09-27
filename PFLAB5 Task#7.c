#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);

    if (b != 0) {
        printf("Quotient: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    } else {
        printf("Division and remainder cannot be calculated as (b = 0).\n");
    }

    return 0;
}
