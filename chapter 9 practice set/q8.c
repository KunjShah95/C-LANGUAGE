#include <stdio.h>
#include <string.h>

// Define a structure to represent a Bank Account
typedef struct {
    int accountNumber;      // Unique ID for the account (to identify the account)
    char accountHolder[100]; // Name of the account holder (to identify the owner of the account)
    float balance;          // Current balance in the account (to store the amount of money in the account)
    char accountType[20];   // Type of account (e.g., Checking, Savings) (to know what type of account it is)
} BankAccount;

// Function to display account details
void displayAccountDetails(BankAccount account) {
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder: %s\n", account.accountHolder);
    printf("Balance: %.2f\n", account.balance);
    printf("Account Type: %s\n", account.accountType);
}

int main() {
    // Create a bank account instance
    BankAccount customer1;

    // Input the details of the customer account
    printf("Enter Account Number: ");
    scanf("%d", &customer1.accountNumber);
    
    // Clear the buffer to avoid any unwanted characters affecting subsequent input
    getchar(); // to clear the newline character from the input buffer
    
    printf("Enter Account Holder Name: ");
    fgets(customer1.accountHolder, sizeof(customer1.accountHolder), stdin);
    customer1.accountHolder[strcspn(customer1.accountHolder, "\n")] = '\0'; // Remove trailing newline character
    
    printf("Enter Balance: ");
    scanf("%f", &customer1.balance);

    getchar(); // clear buffer

    printf("Enter Account Type (e.g., Checking, Savings): ");
    fgets(customer1.accountType, sizeof(customer1.accountType), stdin);
    customer1.accountType[strcspn(customer1.accountType, "\n")] = '\0'; // Remove trailing newline character

    // Display the account details
    printf("\nAccount Details:\n");
    displayAccountDetails(customer1);

    return 0;
}
