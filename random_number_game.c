#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int user_guess, computer_choice, difference;

    //get user input
    printf("Guess a number between 1-5. Please enter your choice:");
    scanf("%d", &user_guess);

    //random number generator
    srand(time(NULL));
    computer_choice = (rand() % 5) + 1;

    // Determine the winner
    if (user_guess == computer_choice) {
        printf("The difference between your guess and the computers choice is 0! Congradulations, you guessed the number.\n");
    } 
    else if (user_guess != computer_choice) {
        switch(computer_choice) {
        case user_guess > computer_choice:
            difference = user_guess - computer_choice;
            printf("The difference between the random number and your guess is %d\n", difference);
            printf("The correct answer was %d\n", computer_choice);
            printf("Does %d equal %d?\n", computer_choice, user_guess);
            printf("%s\n", user_guess == computer_choice ? "true" : "false");
            break;
        case user_guess < computer_choice:
            difference = computer_choice - user_guess;
            printf("The difference between the random number and your guess is %d\n", difference);
            printf("The correct answer was %d\n", computer_choice);
            printf("Does %d equal %d?\n", computer_choice, user_guess);
            printf("%s\n", user_guess == computer_choice ? "true" : "false");
            break;
        }
    }
    
    return 0;
}