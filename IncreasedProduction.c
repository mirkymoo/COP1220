#include <stdio.h>

int main() {
    const int goal = 10000; //# parts per month
    const double increaseRate = 0.06; //6%
    int currentProduction;

    //user input
    printf("What is the number of parts a worker currently produces? ");
    scanf("%d", &currentProduction);
    printf("\nMonth\tAnticipated Output\n");

    int month;
    for (month = 1; month <= 24; month++) {
        printf("%d\t%d\n", month, currentProduction);
        currentProduction += currentProduction * increaseRate;
        if (currentProduction > goal) {
            printf("\nProduction exceeds 10,000 parts in %d month(s).\n", month);
            break;
        }
    }

    if (month == 25) {
        printf("\nThe worker will not reach the goal within 24 months.\n");
    }

    return 0;
}
