#include "main.h"
#include<stdio.h>
/**
 * print_times_table - prints the times table
 * @n: function parameter
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
int i;
int j;
int sum;
if (n > 15 || n < 0)
{
}
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
sum  = i * j;
if (j != n)
{
printf("%d, ", sum);
}
else
{
printf("%d", sum);
}
}
printf("\n");
}
}
}
