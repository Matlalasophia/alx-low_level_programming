#include<stdio.h>
/**
 * main - prints alphabetic in lowercase
 * Return:0
 */
int main(void)
{
int d;
for (d = 0; 10 > d; d++)
{
putchar(d + '0');
}
char c;
for (c = 'a'; 'f' >= c; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
