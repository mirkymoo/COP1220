#include <stdio.h>

union integer {
    char c;
    short s;
    int i;
    long l;
};

int main() {
    union integer data;

    printf("Enter a char: ");
    scanf("%c", &data.c);
    printf("Char: %c\n", data.c);
    printf("Short: %d\n", data.s);
    printf("Int: %d\n", data.i);
    printf("Long: %ld\n", data.l);

    printf("\nEnter a short: ");
    scanf("%hd", &data.s);
    printf("Char: %c\n", data.c);
    printf("Short: %d\n", data.s);
    printf("Int: %d\n", data.i);
    printf("Long: %ld\n", data.l);

    printf("\nEnter an int: ");
    scanf("%d", &data.i);
    printf("Char: %c\n", data.c);
    printf("Short: %d\n", data.s);
    printf("Int: %d\n", data.i);
    printf("Long: %ld\n", data.l);

    printf("\nEnter a long: ");
    scanf("%ld", &data.l);
    printf("Char: %c\n", data.c);
    printf("Short: %d\n", data.s);
    printf("Int: %d\n", data.i);
    printf("Long: %ld\n", data.l);

    return 0;
}

//values will not always print correctly. all depends on systems and compilers the code is runned on
