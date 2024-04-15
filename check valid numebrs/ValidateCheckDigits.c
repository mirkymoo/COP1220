#include <stdio.h>

int isValidAccountNumber(int accountNumber) {
    int sum = 0;
    int lastDigit = accountNumber % 10;
    
    accountNumber /= 10; 
    for (int i = 0; i < 5; i++) {
        sum += accountNumber % 10;
        accountNumber /= 10;
    }
    return (lastDigit == sum % 10);
}

int main() {
    FILE *inputFile, *outputFile;
    int accountNumber;
    inputFile = fopen("account_numbers.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    outputFile = fopen("valid_account_numbers.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    while (fscanf(inputFile, "%d", &accountNumber) != EOF) {
        if (isValidAccountNumber(accountNumber)) {
            printf("Account number %d is valid.\n", accountNumber);
            fprintf(outputFile, "%d\n", accountNumber);
        } else {
            printf("Account number %d is invalid.\n", accountNumber);
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
