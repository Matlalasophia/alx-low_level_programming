#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 * Return: Always  (Success)
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
_putchar('\n');
for (i = 0; j < size; i++)
{
for (j = 0; j < (size); j++)
{
_putchar('#');
}
_putchar('\n');
}
}
