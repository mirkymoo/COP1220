#include <stdio.h>

int main() {

float starting_milage, ending_milage, miles_travled, reimbursement;
float rate_per_mile = 0.35;

//collect input
printf("Enter beginning odometer reading:\n");
scanf("%f", &starting_milage);

printf("Enter ending odometer reading:\n");
scanf("%f", &ending_milage);

//calculate miles travled
miles_travled = ending_milage - starting_milage;

//calculate reimbustment
reimbursement = rate_per_mile * miles_travled;

printf("You travled %0.1f miles. At $%0.2f per mile, your reimbursement is $%0.2f.\n", miles_travled, rate_per_mile, reimbursement);

return 0;

}