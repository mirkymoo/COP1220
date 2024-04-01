#include <stdio.h>

void buildingCarbonFootprint();
void carCarbonFootprint();
void bicycleCarbonFootprint();

void buildingCarbonFootprint() {
    double area, emissions;

    printf("What is the area of the building in square meters? ");
    scanf("%lf", &area);
    emissions = area * 0.5;
    printf("Carbon footprint of your building is %.2lf kgCO2\n\n", emissions);
}

void carCarbonFootprint() {
    double distance, emissions;

    printf("What is the distance traveled in kilometers? ");
    scanf("%lf", &distance);
    emissions = distance * 0.2;
    printf("The carbon footprint of a care is %.2lf kgCO2\n\n", emissions);
}

void bicycleCarbonFootprint() {
   double distance, emissions;

    printf("What is the distance traveled in kilometers? ");
    scanf("%lf", &distance);
    emissions = distance * 0.016;
    printf("The carbon footprint of a bicycle is %.2lf kgCO2\n\n", emissions);
}

int main() {
    // Array of function pointers
    void (*calculateCarbonFootprint[3])() = {buildingCarbonFootprint, 
                                             carCarbonFootprint, 
                                             bicycleCarbonFootprint};

    int choice;

    do {
        // Display menu
        printf("Pick which of the following items you are looking to calculate the carbon footprint of\n");
        printf("1. building\n");
        printf("2. car\n");
        printf("3. bicycle\n");
        printf("4. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            case 2:
            case 3:
                calculateCarbonFootprint[choice - 1]();
                break;
            case 4:
                printf("You are now exiting the program\n");
                break;
            default:
                printf("Please enter a valid choice. A number between 1 and 4.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
