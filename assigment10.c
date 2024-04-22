#include <stdio.h>

//Define a struct called part containing unsigned int variable p
//artNumber and char array partName with values that may be as long as 25 characters 
//(in- cluding the terminating null character).
struct part {
    unsigned int partNumber;
    char partName[26];
};

//Define Part to be a synonym for the type struct part.
typedef struct part Part;

int main() {
    //Use Part to declare variable a to be of type struct part,
    //array b[10] to be of type struct part and variable ptr to be of type pointer to struct part.
    Part a;
    Part b[10];
    Part *ptr;

    //Read a part number and a part name from the keyboard into the individual members of variable a.
    printf("Enter part number: ");
    scanf("%u", &a.partNumber);
    printf("Enter part name (up to 25 characters): ");
    scanf(" %[^\n]", a.partName);

    //Assign the member values of variable a to element 3 of array b
    b[3] = a;

    // Assign the address of array b to the pointer variable ptr
    ptr = b;

    //Print the member values of element 3 of array b using the variable ptr 
    //and the structure pointer operator to refer to the members
    printf("Part Number: %u\n", ptr[3].partNumber);
    printf("Part Name: %s\n", ptr[3].partName);

    return 0;
}
