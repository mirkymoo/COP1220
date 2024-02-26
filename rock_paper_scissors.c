#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int user_choice, computer_choice;

    //get user input
    printf("Let's play, Rock Paper Siccors!\n 1 - Rock\n 2 - Paper\n 3 - Scissors\nPlease enter your choice:");
    scanf("%d", &user_choice);

    printf("Your choice was: ");
    switch(user_choice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    //random number generator
    srand(time(NULL));
    computer_choice = (rand() % 3) + 1;
    
      printf("The computer's choice was: ");
    switch(computer_choice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }
    
    // Determine the winner
    if (user_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((user_choice == 1 && computer_choice == 3) ||
               (user_choice == 2 && computer_choice == 1) ||
               (user_choice == 3 && computer_choice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    
    return 0;
}