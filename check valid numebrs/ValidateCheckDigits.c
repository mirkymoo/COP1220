#include <stdio.h>

// Function to validate the account number
int isValidAccountNumber(int accountNumber) {
    int sum = 0;
    int lastDigit = accountNumber % 10; // Extract the last digit
    
    // Calculate the sum of the first five digits
    accountNumber /= 10; // Remove the last digit
    for (int i = 0; i < 5; i++) {
        sum += accountNumber % 10;
        accountNumber /= 10;
    }
    
    // Check if the last digit equals the remainder when sum is divided by 10
    return (lastDigit == sum % 10);
}

int main() {
    FILE *inputFile, *outputFile;
    int accountNumber;

    // Open the input file
    inputFile = fopen("account_numbers.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open the output file
    outputFile = fopen("valid_account_numbers.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Read each account number from the input file, validate it, and display whether it's valid
    while (fscanf(inputFile, "%d", &accountNumber) != EOF) {
        if (isValidAccountNumber(accountNumber)) {
            printf("Account number %d is valid.\n", accountNumber);
            fprintf(outputFile, "%d\n", accountNumber); // Write valid account number to output file
        } else {
            printf("Account number %d is invalid.\n", accountNumber);
        }
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
