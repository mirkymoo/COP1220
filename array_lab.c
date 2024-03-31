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
    //print
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
        for (int j = 0; j < 5; j++) {
            square[i][j] = value;
            value++;
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
    for (int i = 0; i < 5; i++) {
        int column_total = 0;
        for (int j = 0; j < 5; j++) {
            column_total += table[j][i];
        }
        table[4][i] = column_total;
    }

    for (int i = 0; i < 5; i++) {
        int row_total = 0;
        for (int j = 0; j < 5; j++) {
            row_total += table[i][j];
        }
        table[i][5] = row_total;
    }

    int grand_total = 0;
    for (int i = 0; i < 5; i++) {
        grand_total += table[4][i];
    }
    table[4][5] = grand_total;

    //print
    printf("Question 5 Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
//--------------------QUESTION 6---------------------------------
    //overriding existing values with 0
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            square[i][j] = 0;
        }
    }
    //to reset all values back to 0 as assigment states to work with -> int square [ 5 ][ 5 ] = { 0 }
    //how ever code was writen to wrok with the values for array square as presented at the end of question 4
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            //check if value is out of bound for squre array
            if (i < 5 && j < 5) {
                product[i][j] = square[i][j] * table[i][j];
                } else {
                //if out of bound then value in array square is 0
                product[i][j] = 0 * table[i][j];
        }
    }
    }

    //print
    printf("Question 6 Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}