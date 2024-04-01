#include <stdio.h>

int main() {
    int value = 1;
    int square[5][5] = {0}, product[ 5 ][ 6 ];
    int table[5][6] = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {20, 10, 5, 3, 1},
        {3, 6, 9, 12, 15},};

//--------------------QUESTION 1---------------------------------
    //filling the array square with the indentity matrix
    //i represent the row and j represents the column
    for (int i= 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){
                square[i][j] = value;
            }
        }
    }
    //printing the square array
    printf("Question 1 Matrix: \n");
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++){
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
//--------------------QUESTION 2---------------------------------
for (int i= 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){
                square[i][j] = value * value;
                value++;
            }
        }
    }

    //print
    printf("Question 2 Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
//--------------------QUESTION 3---------------------------------

    //overriding existing values with 0
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j){
                square[i][j] = 0;
            }
        }
    }

    value = 80;
    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < 5; j++) {
            if (i + j == 4) {
                square[i][j] = value;
                value /= 2;
            }
        }
    }

   //print
    printf("Question 3 Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }     
//--------------------QUESTION 4---------------------------------

    value = 1;
    for (int i = 0; i < 5; i++) {
        // Loop through each column
        for (int j = 0; j < 5; j++) {
            square[i][j] = value; // Assign value to current element
            value++; // Increment value for next iteration
        }
    }
    //print
    printf("Question 4 Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }   
//--------------------QUESTION 5---------------------------------

    // Calculate column totals and fill in the last column
    for (int i = 0; i < 5; i++) {
        int column_total = 0;
        for (int j = 0; j < 5; j++) {
            column_total += table[j][i];
        }
        table[4][i] = column_total;
    }

    // Calculate row totals and fill in the bottom row
    for (int i = 0; i < 5; i++) {
        int row_total = 0;
        for (int j = 0; j < 5; j++) {
            row_total += table[i][j];
        }
        table[i][5] = row_total;
    }

    // Calculate the grand total
    int grand_total = 0;
    for (int i = 0; i < 5; i++) {
        grand_total += table[4][i];
    }
    table[4][5] = grand_total;

    // Print the updated table
    printf("Question 5 Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
//--------------------QUESTION 6---------------------------------
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (i < 5 && j < 5) {
                product[i][j] = square[i][j] * table[i][j]; // Accumulate the products
                } else {
                // Assume value in 'square' is 0 if indices are out of bounds
                product[i][j] = 0 * table[i][j];
        }
    }
    }

    // Print the product matrix
    printf("Question 6 Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}



