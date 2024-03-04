#include <stdio.h>

int calc_premium(int current_year, int birth_year) {
    int age = current_year - birth_year;
    int decades = age / 10;
    int premium = (decades + 15) * 20;

    return premium;
}

int main() {
    int current_year, birth_year;

    //collect user input and print premium
    printf("What is the the current year?\n");
    scanf("%d", &current_year);
    printf("What is your birth year?\n");
    scanf("%d", &birth_year);

    int premium = calc_premium(current_year, birth_year);
    printf("Your premium amount would be $%d.\n", premium);

    return 0;
}
