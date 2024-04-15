#include <stdio.h>

//a
printf("%-15.8u\n", 40000);

//b
unsigned int hex;
scanf("%x", &hex);

//c
printf("%+d\n", 200);
printf("%d\n", 200);

//d
printf("0x%x\n", 100);

//e
char s[100];
int i = 0;
char ch;
while ((ch = getchar()) != 'p' && ch != EOF) {
    s[i++] = ch;
}
s[i] = '\0';

//f
printf("%09.3f\n", 1.234);

//g
int hour, minute, second;
scanf("%d:%d:%d%*c", &hour, &minute, &second);

//h
char s[100];
scanf("\"%99[^\"]\"", s);

//j
int hour, minute, second;
scanf("%d%*c%d%*c%d", &hour, &minute, &second);

//k
