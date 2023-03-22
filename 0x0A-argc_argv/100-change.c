#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int num, i, result;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
result = 0;
if (num < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i <= 5; i++)
{
if (num == coins[i] && num - coins[i] == 0)
{
result++;
break;
}
if (num > coins[i])
{
while (num >= coins[i])
{
num = num - coins[i];
result++;
}
}
}
printf("%d\n", result);
return (0);
}
