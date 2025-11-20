#include <stdio.h>
#include <string.h>

int main() {
    char names[3][21];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\nStudent Names:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
