#include "main.h"
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%lu\n", mul);
return (0);
}
