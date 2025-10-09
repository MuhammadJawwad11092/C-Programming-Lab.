#include <stdio.h>

int main() {
    float balance = 5000.0, transaction;
    int deposits = 0, withdrawals = 0;

    printf("Initial balance: $%.2f\n", balance);
    printf("Enter transactions (positive for deposit, negative for withdrawal, 0 to stop):\n");

    while (1) {
        printf("Enter transaction amount: ");
        scanf("%f", &transaction);

        if (transaction == 0)
            break;

        balance += transaction;

        if (transaction > 0)
            deposits++;
        else
            withdrawals++;

        printf("Updated balance: $%.2f\n", balance);
    }

    printf("\n--- Transaction Summary ---\n");
    printf("Final balance: $%.2f\n", balance);
    printf("Total deposits: %d\n", deposits);
    printf("Total withdrawals: %d\n", withdrawals);

    return 0;
}
