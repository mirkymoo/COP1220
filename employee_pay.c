#include <stdio.h>

int main(){
    int numEmployees, hoursWorked;
    float hourlyRate, grossPay;

    printf("Entered the number of employees:\n");
    scanf("%d", &numEmployees);

    for(int i = 1; i <=numEmployees; i++){
        printf("Enter details for Employee %d:\n", i);
        printf("Name: ");
        char name[50];
        scanf("%s", name);
        printf("Hours worked last week: ");
        scanf("%d", &hoursWorked);
        printf("Hourly rate: $");
        scanf("%f", &hourlyRate);

        if (hoursWorked <= 40) {
            grossPay = hoursWorked * hourlyRate;
        } 
        else {
            grossPay = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
        }

        // Display employee's gross pay
        printf("Gross pay for %s: $%.2f\n", name, grossPay);
    }
    return 0;
}