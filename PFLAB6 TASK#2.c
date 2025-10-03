#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    int primeCount = 0, primeSum = 0;

    printf("Enter a number : \n");
    scanf("%d", &n);

    printf("\nPrime numbers up to %d are: \n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  
        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
            primeCount++;
            primeSum += i;
        }
    }

    printf("\n\nTotal prime numbers up to %d: %d", n, primeCount);
    printf("\nSum of all prime numbers up to %d: %d\n", n, primeSum);

    return 0;
}
