#include <stdio.h>

#define SIZE 10

int main() {
    double fractions[SIZE] = {0};

    printf("Array element 4: %.2lf\n", fractions[4]);

    fractions[9] = 1.667;
    fractions[6] = 3.333;

    printf("Array element 6: %.2lf\n", fractions[6]);
    printf("Array element 9: %.2lf\n", fractions[9]);

    printf("All elements of the array:\n");
    for (int x = 0; x < SIZE; x++) {
        printf("%.2lf ", fractions[x]);
    }
    printf("\n");

    return 0;
}