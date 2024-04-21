#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumbers[3];
    int userNumbers[3];
    int i, j;

    //pick 3 random lucky numbers
    srand(time(NULL));
    for (i = 0; i < 3; i++) {
        randomNumbers[i] = rand() % 10;
    }

    printf("Welcome to the Mini Lotto!\n");
    printf("Guess the 3 numbers between 0 and 9.\n");

    //user input
    for (i = 0; i < 3; i++) {
        printf("Enter guess %d: ", i + 1);
        scanf("%d", &userNumbers[i]);
    }

    //check for matches
    int matches = 0;
    int guessed[3] = {0}; //keep track of already matched numbers
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (userNumbers[i] == randomNumbers[j] && !guessed[j]) {
                matches++;
                guessed[j] = 1;
                break;
            }
        }
    }

    //display lucky winning numbers
    printf("The winning numbers were: %d, %d, %d\n", randomNumbers[0], randomNumbers[1], randomNumbers[2]);
    //display correct matches & prizes
    if (matches == 3 && userNumbers[0] == randomNumbers[0] && userNumbers[1] == randomNumbers[1] && userNumbers[2] == randomNumbers[2]) {
        printf("Congratulations! You got all 3 numbers in the correct order!\n For matching three matching numbers in exact order, the award is $1,000,000.\n");
    } else if (matches == 3) {
        printf("Congratulations! You got all 3 numbers correct!\n The reward for any three matching numbers not in order is $1,000.\n");
    } else if (matches == 2) {
        printf("Congratulations! You got 2 matches!\n The reward for any two matching numbers is $100.\n");
    } else if (matches == 1) {
        printf("Congratulations! You got 1 match!\n The reward for any one matching number is $10.\n");
    } else if (matches == 0) {
        printf("No matching numbers: award is $0.\n");
    }

    return 0;
}
