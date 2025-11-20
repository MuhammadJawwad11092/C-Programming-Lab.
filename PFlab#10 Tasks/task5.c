#include <stdio.h>
#include <string.h>

int main() {
    char msg[200];
    char backup[200];

    printf("Enter message: ");
    fgets(msg, sizeof(msg), stdin);

    strcpy(backup, msg);

    printf("Original: %s", msg);
    printf("Backup: %s", backup);

    return 0;
}
