#include <stdio.h>

int main() {

int fahrenheit;
double celsius;

//collect input in Fahrenheit
printf("Enter the temparture in Fahrenheit to be converted into Celsius:\n");
scanf("%d", &fahrenheit);

//calculate and print Celsius
celsius = (fahrenheit - 32) * (5.0/9.0);
printf("%d degrees Fahrenheit is equivalent to %0.2f degrees Celsius", fahrenheit, celsius);

return 0;

}