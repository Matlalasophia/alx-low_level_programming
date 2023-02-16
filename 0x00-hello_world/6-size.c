#include<stdio.h>
int main(void) {
int i;
unsigned long ui;
float f;
double d;
char c;
long l;

printf("Size of char: %zu bytes\n", sizeof(c));
printf("Size of int: %zu bytes\n", sizeof(i));
printf("Size of long int: %zu bytes\n", sizeof(ui));
printf("Size of long long int: %zu byte\n", sizeof(d));
printf("Size of float: %zu byte\n", sizeof(f));
return 0;
}
