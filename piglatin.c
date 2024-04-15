#include <stdio.h>
#include <string.h>
#include <ctype.h>

//look for vowel
int check_for_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

//change to piglatin
void convert_to_piglatin(char word[]) {
    int length = strlen(word);
    int i;

    if (check_for_vowel(word[0])) {
        printf("%say\n", word);
    } else {
        for (i = 1; i < length; i++) {
            if (check_for_vowel(word[i])) {
                break;
            }
        }
        printf("%s%.*s%s\n", &word[i], i, word, "ay");
    }
}

int main() {
    char word[100];
    printf("Enter a word to translate into Pig Latin: ");
    scanf("%s", word);
    printf("In Pig Latin that is: ");
    convert_to_piglatin(word);

    return 0;
}
