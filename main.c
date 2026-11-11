#include <stdio.h>
#include <stdlib.h>


int main()
 {
    int pin = 1234;
    int enteredPin;
    int choice;
    int attempts = 0;
    float balance = 10000;
    float amount;

    printf("      WELCOME TO ATM      \n");

    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("\nLogin successful!\n");
            break;
        }
        else {
            attempts++;
            printf("Incorrect PIN. Attempts remaining: %d\n",
                   3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("\nYour account is locked. Too many attempts.\n");
        return 0;
    }

    do {
        printf("\n      ATM MENU        \n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nYour balance is: sh %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount!\n");
                }
                else if (amount > balance) {
                    printf("Insufficient balance!\n");
                }
                else {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                    printf("Remaining balance: sh %.2f\n", balance);
                }
                break;

            case 3:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount!\n");
                }
                else {
                    balance += amount;
                    printf("Deposit successful!\n");
                    printf("New balance: sh %.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}











