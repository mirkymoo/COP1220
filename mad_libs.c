#include <stdio.h>

int main() {
    char noun1[20], noun2[20], adjective1[20], verb1[20];

    printf("Enter a noun:\n");
    scanf("%s", noun1);
    printf("Enter another noun:\n");
    scanf("%s", noun2);
    printf("Enter an adjective:\n");
    scanf("%s", adjective1);
    printf("Enter a past-tense verb:\n");
    scanf("%s", verb1);

    printf("Mary had a little %s.\n", noun1);
    printf("Its %s was %s as snow.\n", noun2, adjective1);
    printf("And everywhere that Mary %s.\n", verb1);
    printf("The %s was sure to go.\n", noun1);

    return 0;
}