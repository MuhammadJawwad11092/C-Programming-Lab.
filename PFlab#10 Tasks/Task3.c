#include <stdio.h>
#include <string.h>

int main() {
    char code1[100], code2[100];
    int n;

    printf("Enter first product code: ");
    scanf("%s", code1);

    printf("Enter second product code: ");
    scanf("%s", code2);

    printf("How many characters should be compared? ");
    scanf("%d", &n);

    
    int result = strncmp(code1, code2, n);

    if (result == 0) {
        printf("The first %d characters MATCH. Same prefix.\n", n);
    } else {
        printf("The first %d characters DO NOT match.\n", n);
    }

    return 0;
}
