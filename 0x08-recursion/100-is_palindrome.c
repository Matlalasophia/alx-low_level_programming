#include "main.h"
/**
 * is_palindrome - function that returns 1 if a string is a palindome
 * @s: string to be tested
 * Return: returns 1 if a string is palindrome
 * otherwise returns 0 if number is not a palindrome
 */
int is_palindrome(char *s);
{
if (*s != '\0')
{
is_palindrome(s + 1);
_putchar (*s);
}
}

