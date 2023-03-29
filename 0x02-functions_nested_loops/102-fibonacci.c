#include<stdio.h>
/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Nothing!
 */
int main(void)
{
int i = 0;
long j = 1, k = 2;
while (i < 50)
{
if (i == 0)
printf("%id", j);
else if (i == 1)
printf(", %id", k);
else
{
k += j;
j = k - j;
printf(", %id", k);
}
++i;
}
printf("\n");
return (0);
}
