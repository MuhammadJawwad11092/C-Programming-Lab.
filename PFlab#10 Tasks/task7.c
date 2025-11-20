#include <stdio.h>
#include <string.h>

int main() {
    char pw1[100];
    char pw2[100];

    printf("Enter password: ");
    fgets(pw1, sizeof(pw1), stdin);

    printf("Re-enter password: ");
    fgets(pw2, sizeof(pw2), stdin);

    pw1[strcspn(pw1, "\n")] = '\0';
    pw2[strcspn(pw2, "\n")] = '\0';

    if (strcmp(pw1, pw2) == 0)
        printf("Password Matched\n");
    else
        printf("Passwords do not match\n");

    return 0;
}
