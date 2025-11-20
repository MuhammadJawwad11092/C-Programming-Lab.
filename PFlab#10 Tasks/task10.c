#include <stdio.h>
#include <string.h>

int main() {
    char names[5][21];
    char search[21];
    FILE *file;
    int i, found = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    file = fopen("names.txt", "w");
    for (i = 0; i < 5; i++) {
        fprintf(file, "%s\n", names[i]);
    }
    fclose(file);

    file = fopen("names.txt", "r");
    if (!file) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter name to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    char line[21];
    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\n")] = '\0';
        if (strcmp(line, search) == 0) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Name found in directory\n");
    else
        printf("Name not found\n");

    fclose(file);
    return 0;
}
