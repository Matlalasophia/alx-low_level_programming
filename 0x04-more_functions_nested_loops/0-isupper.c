#include<stdio.h>
/**
 * isUpper - uppercase letters
 * @c: char to check
 * Return: 0 or 1
 */
char isUpper(char c)
{
if (isupper(c))
{
putchar('1');
putchar('\n');
}
else
{
putchar('0');
putchar('\n');
}
return (0);
}

/**
 * main - uppercase letters
 * Return: 0 or 1
 */


int main(void)
{
char c = 'a';
isUpper(c);
return (0);
}
