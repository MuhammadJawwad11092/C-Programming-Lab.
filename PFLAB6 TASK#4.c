#include <stdio.h>

int main() {
    char ch, choice;
    int vowelCount = 0, consonantCount = 0;

    do {
        printf("Enter a character: ");
        scanf(" %c", &ch); 
        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }

        
        if (ch >= 'a' && ch <= 'z') {
         
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                printf("%c is a vowel\n", ch);
                vowelCount++;
                
            } else {
                printf("%c is a consonant\n", ch);
                consonantCount++;
            }
        } else {
            printf("%c is not an alphabet, ignoring.\n", ch);
        }

  
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

   
    printf(" Final Result : \n");
    printf("Total vowels entered: %d\n", vowelCount);
    printf("Total consonants entered: %d\n", consonantCount);

    return 0;
}
