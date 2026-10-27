/*
TASK:
Create a menu-driven banking program for deposits, withdrawals, and balance inquiries.
Validate transaction amounts and continue running until the user selects Exit.
*/


#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("\n\n");

    // Variable declaration....
    int amount;
    int sum = 0;
    int choice;

    // Do-while loop, re-run the code untill the condition becomes wrong....
    do
    {
        // Menu printing, every time when the loop re-start....
        printf("==== Banking System Menu ====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Display Account Balance\n");
        printf("4. Exit\n\n");

        // Taking choice from the user....
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a menu number.\n");
            return 1;
        }

        // If choice is 1, takes money from user and update the account balance....
        if (choice == 1)
        {
            printf("Enter Amount to deposit: ");
            if (scanf("%d", &amount) != 1 || amount <= 0)
            {
                printf("Deposit must be a positive integer.\n\n");
                return 1;
            }
            if (amount > INT_MAX - sum)
            {
                printf("Deposit would exceed the supported balance limit.\n\n");
                break;
            }
            sum += amount;
            printf("Amount deposited successfully!\n\n");
        }

        // If choice is 2, withdraw of money and updates the account balance....
        else if (choice == 2)
        {
            printf("Enter Amount to withdraw: ");
            if (scanf("%d", &amount) != 1 || amount <= 0)
            {
                printf("Withdrawal must be a positive integer.\n\n");
                return 1;
            }
            // If amount(balance) is not sufficent, withdraw did not occur....
            if (amount > sum)
            {
                printf("You have not sufficent amount to withdraw!\n\n");
            }
            // If amount(balance) is sufficent, withdraw occur....
            else
            {
                printf("Amount withdraw successfully!\n\n");
                sum -= amount;
            }
        }

        // If choice is 3, code will show account balance....
        else if (choice == 3)
        {
            printf("Account Balance: %d\n\n", sum);
        }

        else if (choice == 4)
        {
            printf("Exiting the banking system.\n");
        }

        else
        {
            printf("Invalid choice. Select a number from 1 to 4.\n\n");
        }

    }
    // Condition check, if choice is 1, 2 or 3 then repeat the loop....
    while (choice != 4);

    printf("\n");

    return 0;
}
