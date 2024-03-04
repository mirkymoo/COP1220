#include <stdio.h>

//functions
float calc_area_of_wall(float length, float width, float height) {
    float area_of_wall = 2 * height * (length + width);
    return area_of_wall;
}

float calc_gallons(float area_of_wall) {
    const float coverage_per_gallon = 350; 
    return area_of_wall / coverage_per_gallon;
}

float calc_price(float gallons_required) {
    const float price_per_gallon = 32;
    return gallons_required * price_per_gallon;
}

int main() {
    float length, width, height;
    
    //colletet input from user
    printf("Waht is the length of the room in feet?\n");
    scanf("%f", &length);
    printf("Waht is the width of the room in feet?\n");
    scanf("%f", &width);
    printf("Waht is the height of the room in feet?\n");
    scanf("%f", &height);
    
    //calculations
    float area_of_wall = calc_area_of_wall(length, width, height);
    float gallons_required = calc_gallons(area_of_wall);
    float price = calc_price(gallons_required);
    
    //display results
    printf("You will need %.2f gallons of paint, which should cost you $%.2f\n\n", gallons_required, price);
    
    return 0;
}