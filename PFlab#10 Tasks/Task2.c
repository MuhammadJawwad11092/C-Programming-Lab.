#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char ch;

    printf("Enter a word (no spaces): ");
    scanf("%s", word);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);  


    char *ptr = strchr(word, ch);

    if (ptr != NULL) {
        int index = ptr - word;   
        printf("Character '%c' found at position %d.\n", ch, index);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}
