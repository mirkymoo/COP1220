#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c) {
    // Check if the character is a vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void convertToPigLatin(char word[]) {
    int length = strlen(word);
    int i;

    // Check if the word starts with a vowel
    if (isVowel(word[0])) {
        printf("%say\n", word);
    } else {
        // Find the index of the first vowel
        for (i = 1; i < length; i++) {
            if (isVowel(word[i])) {
                break;
            }
        }
        // Move the consonants to the end and add "ay"
        printf("%s%.*s%s\n", &word[i], i, word, "ay");
    }
}

int main() {
    char word[100];
    char choice;

    do {
        // Get input from the user
        printf("Enter a word: ");
        scanf("%s", word);

        // Convert to Pig Latin
        convertToPigLatin(word);

        // Prompt to continue or exit
        printf("Do you want to convert another word? (y/n): ");
        scanf(" %c", &choice); // note the space before %c to consume the newline character

    } while (choice == 'y' || choice == 'Y');

    return 0;
}