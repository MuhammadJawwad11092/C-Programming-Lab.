#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    int a, b, c;

    f = fopen("library.txt", "w");
    if (f == NULL) {
        printf("File error\n");
        exit(1);
    }

    printf("Enter three book IDs:\n");
    scanf("%d %d %d", &a, &b, &c);

    fprintf(f, "%d\n%d\n%d\n", a, b, c);
    fclose(f);

    f = fopen("library.txt", "r");
    if (f == NULL) {
        printf("File error\n");
        exit(1);
    }

    fscanf(f, "%d", &a);
    fscanf(f, "%d", &b);
    fscanf(f, "%d", &c);
    fclose(f);

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
