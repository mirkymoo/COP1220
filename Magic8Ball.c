#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    //magic 8 ball answer choices
    char* answers[] = {
        "It is certain",
        "It is decidedly so",
        "Without a doubt",
        "Yes, definitely",
        "You may rely on it",
        "As I see it, yes",
        "Most likely",
        "Outlook good",
        "Yes",
        "Signs point to yes",
        "Reply hazy, try again",
        "Ask again later",
        "Better not tell you now",
        "Cannot predict now",
        "Concentrate and ask again",
        "Don't count on it",
        "My reply is no",
        "My sources say no",
        "Outlook not so good",
        "Very doubtful"
    };

    //random number generator
    srand(time(NULL));

    while (1) {
        printf("Ask the Magic 8 Ball a yes or no question (type '0' to exit): ");

        //clear input
        fflush(stdin);

        //buffer to store user input
        char buffer[100];
        fgets(buffer, sizeof(buffer), stdin);

        //check for "0" responce to exit
        if (strcmp(buffer, "0\n") == 0) {
            printf("Exiting...\n");
            break;
        }

        //picking random answer from array
        int index = rand() % 20;

        //print answer
        printf("%s\n", answers[index]);
    }

    return 0;
}
