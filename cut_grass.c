#include <stdio.h>

int main() {
    float yard_length, yard_width, house_length, house_width;
    int hours, minutes, remaining_seconds, seconds, timetotal_in_seconds;

    //collect mesurments
    printf("Enter your answers in feet.\nWhat is the length of the yard?\n");
    scanf("%f", &yard_length);
    printf("What is the width of the yard?\n");
    scanf("%f", &yard_width);
    printf("What is the length of the house?\n");
    scanf("%f", &house_length);
    printf("What is the width of the house?\n");
    scanf("%f", &house_width);

    // calculations
    timetotal_in_seconds = ((yard_length * yard_width) - (house_length * house_width))/ 2.0;
    hours = timetotal_in_seconds / 3600;
    remaining_seconds = timetotal_in_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("It would take %02d hours, %02d minutes, and %02d secodns to cut the grass\n", hours, minutes, seconds);

    return 0;
}