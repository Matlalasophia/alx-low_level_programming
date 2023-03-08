#include "main.h"
/**
 * _strlen_recursion - function that returns the length of string
 * @s: string length
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
}
else
{
_strlen_recursion(s + 1)
_putchar(*s);
}
}
