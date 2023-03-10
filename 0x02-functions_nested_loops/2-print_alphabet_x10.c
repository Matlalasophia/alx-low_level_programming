#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower case.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
char alphabet = 'a';
int x = 10;
int i;
for (i = 0; i < x; i++)
{
for (alphabet = 'a'; alphabet < 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
