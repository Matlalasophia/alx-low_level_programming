#include<stdio.h>
/**
 * main - prints alphabetic in lowercase
 * Return:0
 */
int main(void)
{
int d;
char c;
for (d = 0; d < 10; d++)
{
putchar(d + '0');
}
for (c = 'a'; 'f' >= c; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
