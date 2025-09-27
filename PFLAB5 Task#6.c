#include <stdio.h>

int main()
{
    int x, y, z, max;

    printf("Enter three numbers (x y z):\n");
    scanf("%d %d %d", &x, &y, &z);

    max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

    printf("The maximum value is : %d\n", max);

    return 0;
}
