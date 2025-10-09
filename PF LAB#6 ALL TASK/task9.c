#include <stdio.h>
#include <string.h>

int main() {
    int num, largest, smallest, firstInput = 1;
    char choice[10];

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (firstInput) {
            largest = smallest = num;
            firstInput = 0;
        } else {
            if (num > largest)
                largest = num;
            if (num < smallest)
                smallest = num;
