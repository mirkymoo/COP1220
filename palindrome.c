#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_if_letter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char my_tolower(char c) {
    return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;
}

int check_if_palindrome(char *phrase) {
    int length = strlen(phrase);
    int i = 0, j = length - 1;
    while (i < j) {
        while (i < length && !check_if_letter(phrase[i])) {
            i++;
        }
        while (j >= 0 && !check_if_letter(phrase[j])) {
            j--;
        }
        if (i < length && j >= 0 && my_tolower(phrase[i]) != my_tolower(phrase[j])) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char phrase[100];
    printf("Please enter a phrase to check if it's a palindrome: ");
    fgets(phrase, sizeof(phrase), stdin);
    if (phrase[strlen(phrase) - 1] == '\n') {
        phrase[strlen(phrase) - 1] = '\0';
    }
    if (check_if_palindrome(phrase)) {
        printf("That is a palindrome!\n");
    } else {
        printf("That is not a palindrome.\n");
    }
    return 0;
}
