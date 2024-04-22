#include <stdio.h>

//function takes an unsigned integer num as input and reverses its bits.
//initializes reversedNum to 0 to store the reversed bits and calculates num of bits
unsigned int reverseBits(unsigned int num) {
    unsigned int reversedNum = 0;
    int bitsCount = sizeof(num) * 8;

//reverse the order of bits
    for (int i = 0; i < bitsCount; i++) {
        reversedNum <<= 1;
        reversedNum |= (num & 1);
        num >>= 1;
    }
    return reversedNum;
}

//binary representation of an unsigned integer num
void printBits(unsigned int num) {
    int bitsCount = sizeof(num) * 8;
    for (int i = bitsCount - 1; i >= 0; i--) {
        printf("%u", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter an unsigned integer value: ");
    scanf("%u", &num);

    printf("Original value in bits: ");
    printBits(num);

    unsigned int reversedNum = reverseBits(num);

    printf("Reversed value in bits: ");
    printBits(reversedNum);

    return 0;
}
