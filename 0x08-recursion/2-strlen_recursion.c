#include "main.h"
/**
 * _strlen_recursion - function that returns the length of string
 * @s: string length
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
/* Base condition*/
if (*s == '\0')
return (0);
else
return(1 + strlen_recursion(s + 1)) : /* sum 1 */
}
