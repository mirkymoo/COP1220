#include <stdio.h>

int main() {
    const int mexicoPopulation = 128000000;
    const int usPopulation = 323000000;
    double mexicoIncrease, usDecrease;

    //user inputs
    printf("What is the annual increase in Mexico's population as a percentage? (Example: 1.5%% percent decrease is entered as 0.015): ");
    scanf("%lf", &mexicoIncrease);
    printf("What is the annual decrease in the U.S. population as a percentage (Example: 1.5%% percent decrease is entered as 0.015): ");
    scanf("%lf", &usDecrease);

    int years = 0;
    double mexicoPopulationCurrent = mexicoPopulation;
    double usPopulationCurrent = usPopulation;

    //prints every year until mexico's population exceeds that of the US
    printf("\nYear\tMexico's Population\tU.S. Population\n");
    while (mexicoPopulationCurrent <= usPopulationCurrent) {
        printf("%d\t%.0lf\t\t%.0lf\n", years, mexicoPopulationCurrent, usPopulationCurrent);
        mexicoPopulationCurrent *= (1 + mexicoIncrease);
        usPopulationCurrent *= (1 - usDecrease);
        years++;

        if (mexicoPopulationCurrent > usPopulationCurrent) {
            printf("%d\t%.0lf\t\t%.0lf\n", years, mexicoPopulationCurrent, usPopulationCurrent);
            printf("\nIt took %d years for the population of Mexico to exceed the population of the United States.\n", years);
            break;
        }
    }

    return 0;
}
