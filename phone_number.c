#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void format_phone_number(char number[]) {
    if (strlen(number) != 10) {
        printf("The phone number cant have more than 10 digits.\n");
        return;
    }
    printf("(%c%c%c)%c%c%c-%c%c%c%c\n", number[0], number[1], number[2], number[3],
           number[4], number[5], number[6], number[7], number[8], number[9]);
}

int main() {
    char number[11];
    do {
        printf("Enter a phone number or enter 999 to exit: ");
        scanf("%s", number);
        if (strcmp(number, "999") == 0) {
            break;
        }
        format_phone_number(number);
    } while (true);

    return 0;
}