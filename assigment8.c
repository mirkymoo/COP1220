#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Section 8.4---------------------------------------------------------------------------------------------------
//Function strtod (p. 396) converts a sequence of characters representing a floating-point value to double.
double strtod(const char *str, char **endptr) {
    return strtod(str, endptr);
}
//Function strtol (p. 397) converts a sequence of characters representing an integer to long.
long strtol(const char *str, char **endptr, int base) {
    return strtol(str, endptr, base);
}
//Function strtoul (p. 398) converts a sequence of characters representing an integer to unsigned long int.
unsigned long strtoul(const char *str, char **endptr, int base) {
    return strtoul(str, endptr, base);
}
//section 8.6---------------------------------------------------------------------------------------------------
//Function strcpy copies its second argument string into its first argument char array. 
void function_strcpy(char *dest, const char *src) {
    strcpy(dest, src);
}
//Function strncpy (p. 404)specifies the maximum number of characters to copy from the string into the array. 
void function_strncpy(char *dest, const char *src, size_t n) {
    strncpy(dest, src, n);
}
//Function strcat (p. 405) appends its second argument string—including its terminating null character—to its first argument string.
void function_strcat(char *dest, const char *src) {
    strcat(dest, src);
}
// Function to append a specified number of characters from the second string to the first string
void function_strncat(char *dest, const char *src, size_t n) {
    strncat(dest, src, n);
}
//section 8.7---------------------------------------------------------------------------------------------------
//Function strcmp (p. 406) compares its first string argument to its second string argument, character by character.
int strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
//Function strncmp (p. 406) is equivalent to strcmp, except that strncmp compares a specified number of characters.
int strncmp(const char *s1, const char *s2, size_t n) {
    while (n-- && *s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    if (n == 0 || (*s1 == '\0' && *s2 == '\0')) {
        return 0;
    } else {
        return *s1 - *s2;
    }
}