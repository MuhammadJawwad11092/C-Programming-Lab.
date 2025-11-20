#include <stdio.h>
#include <string.h>

int main() {
    char u1[200];
    char u2[200];

    printf("Enter first username: ");
    fgets(u1, sizeof(u1), stdin);

    printf("Enter second username: ");
    fgets(u2, sizeof(u2), stdin);

    u1[strcspn(u1, "\n")] = '\0';
    u2[strcspn(u2, "\n")] = '\0';

    strcat(u1, u2);

    printf("Combined username: %s", u1);

    return 0;
}
