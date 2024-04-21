#include <stdio.h>

unsigned int packCharacters(char c1, char c2, char c3, char c4) {
    unsigned int packed = c1;

    packed = (packed << 8) | c2;
    packed = (packed << 8) | c3;
    packed = (packed << 8) | c4;

    return packed;
}

int main() {
    char c1, c2, c3, c4;

    printf("Enter four characters: ");
    scanf(" %c %c %c %c", &c1, &c2, &c3, &c4); // Added space before %c

    printf("Before packing:\n");
    printf("c1: %c - %d\n", c1, c1);
    printf("c2: %c - %d\n", c2, c2);
    printf("c3: %c - %d\n", c3, c3);
    printf("c4: %c - %d\n", c4, c4);

    unsigned int packed = packCharacters(c1, c2, c3, c4);
    printf("Packed value, after packing: %u\n", packed);

    return 0;
}
