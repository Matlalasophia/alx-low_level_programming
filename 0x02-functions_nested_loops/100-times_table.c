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
if ( sum <= 9)
{
printf("%d,   ",sum);
}
else if(sum > 9 && sum <= 99) 
{
printf("%d",sum);

if (i * j+1 > 99){
printf("%s",", ");
}else{
printf("%s",",  ");
}
} 
else if(sum >= 99)
{
printf("%d", sum);
printf("%s",", ");
}
}
if(j == n )
{
printf("%d", sum);
}
}
printf("\n");
}
}
}
