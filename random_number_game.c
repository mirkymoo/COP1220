#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int user_guess, computer_choice, difference;

    //get user input
    printf("Guess a number between 1-5.\nPlease enter your choice: ");
    scanf("%d", &user_guess);

    //random number generator
    srand(time(NULL));
    computer_choice = (rand() % 5) + 1;

    // Determine the winner
    if (user_guess == computer_choice) {
        printf("Does %d equal %d? %s\n", computer_choice, user_guess, user_guess == computer_choice ? "true" : "false");
        printf("The difference between your guess and the random number is 0! Congradulations, you guessed the number.\n");
    } 
    else {
        // Calculate the difference
        difference = abs(computer_choice - user_guess);
        printf("Does %d equal %d? %s\n", computer_choice, user_guess, user_guess == computer_choice ? "true" : "false");
        printf("The difference between the random number and your guess is %d.\n", difference);
        printf("The correct answer was %d.\n", computer_choice);
    }
    
    return 0;
}