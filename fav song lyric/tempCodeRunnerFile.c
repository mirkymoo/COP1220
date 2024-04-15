#include <stdio.h>

int main() {
    char filename1[100], filename2[100];
    FILE *file1, *file2;
    long size1, size2;
    double ratio;

    printf("Enter the name of the first file: ");
    scanf("%s", filename1);
    printf("Enter the name of the second file: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Error opening file %s\n", filename1);
        return 1;
    }

    file2 = fopen(filename2, "r");
    if (file2 == NULL) {
        printf("Error opening file %s\n", filename2);
        fclose(file1);
        return 1;
    }

    fseek(file1, 0, SEEK_END);
    size1 = ftell(file1);

    fseek(file2, 0, SEEK_END);
    size2 = ftell(file2);

    fclose(file1);
    fclose(file2);

    if (size2 != 0) {
        ratio = (double)size1 / size2;
    } else {
        ratio = 0.0;
    }

    printf("Size of %s: %ld bytes\n", filename1, size1);
    printf("Size of %s: %ld bytes\n", filename2, size2);
    printf("Ratio of %s size to %s size: %.2f\n", filename1, filename2, ratio);

    return 0;
}
