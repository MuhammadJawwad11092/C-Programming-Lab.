#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter three integers (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) {
        if (x > z) {
            printf("The largest number is: %d\n", x);
        } else {
            printf("The largest number is: %d\n", z);
        }
    } else {
        if (y > z) {
            printf("The largest number is: %d\n", y);
        } else {
            printf("The largest number is: %d\n", z);
        }
    }

    return 0;
}
