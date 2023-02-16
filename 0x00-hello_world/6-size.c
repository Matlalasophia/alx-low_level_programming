#include<stdio.h>
/**
 * main - A program that print a line using the ptint function
 * Return: 0 (Success)
 */
int main(void)
{
int i;
unsigned long ui;
float f;
double d;
char c;
long l;
printf(
		"Size of char a: %zu byte(s)\n", sizeof(c));
printf(
		"Size of an int: %zu byte(s)\n", sizeof(i));
printf(
		"Size of a long int: %zu byte(s)\n", sizeof(ui));
printf(
		"Size of a long long int: %zu byte(s)\n", sizeof(d));
printf(
		"Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
