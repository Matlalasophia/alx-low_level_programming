#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string in reverse
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
