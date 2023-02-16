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
		"Size of char: %zu byte(s)\n", sizeof(c));
printf(
		"Size of int: %zu byte(s)\n", sizeof(i));
printf(
		"Size of long int: %zu byte(s)\n", sizeof(ui));
printf(
		"Size of long long int: %zu byte(s)\n", sizeof(d));
printf(
		"Size of float: %zu byte(s)\n", sizeof(f));
return (0);
}
