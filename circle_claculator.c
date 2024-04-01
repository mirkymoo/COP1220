#include <stdio.h>
#include <math.h>

#define PI 3.14

// Function prototypes
void calcCircumference(double radius);
void calcArea(double radius);
void calcVolume(double radius);

void calcCircumference(double radius) {
    double circumference = 2 * PI * radius;
    printf("A circle with the radius %.2lf has a circumference of  %.2lf\n", radius, circumference);
}

void calcArea(double radius) {
    double area = PI * radius * radius;
    printf("A circle with the radius %.2lf has an area of  %.2lf\n", radius, area);
}

void calcVolume(double radius) {
    double volume = (4.0 / 3.0) * PI * pow(radius, 3);
    printf("A circle with the radius %.2lf has a volume of %.2lf\n", radius, volume);
}


int main() {
    void (*functions[3])(double) = {calcCircumference, calcArea, calcVolume};

    int choice;
    double radius;

    do {
        printf("This is a circle claculator. Pick what you want to calculate by typing the associate number with your choice:\n");
        printf("1. Circumference\n");
        printf("2. Area\n");
        printf("3. Volume\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            case 2:
            case 3:
                printf("What is the radius of your circle?");
                scanf("%lf", &radius);
                functions[choice - 1](radius);
                break;
            case 4:
                printf("You are now leaving the program.\n");
                break;
            default:
                printf("Please make sure to enter a number between 1 and 4.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
