#include <stdio.h>

int main() {
    char letter_grade;
    float desired_grade, current_grade, current_grade_weight, final_weight, final_needed;

    //collect infromation from user
    printf("Enter desired letter grade:\n");
    scanf("%c", &letter_grade);

    //the final grade desired in numberic value
    printf("Enter minimum average required:\n");
    scanf("%f", &desired_grade);

    printf("Enter current grade in course:\n");
    scanf("%f", &current_grade);

    //what % of the grade final is worth
    printf("Enter how much the final counts as a percentage of the course grade:\n");
    scanf("%f", &final_weight);

    //calculation
    current_grade_weight = (100 - final_weight) / 100;
    final_needed = (desired_grade - (current_grade * current_grade_weight)) / (final_weight / 100);

    //print result
    printf("You need a score of %.2f on the final to get a %c.\n", final_needed, letter_grade);

    return 0;
}