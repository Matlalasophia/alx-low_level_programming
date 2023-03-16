#include<stdio.h>
#include "main.h"
#include<errno.h>
/**
 * main - program that maltiplies two numbers
 * @argc: Number of argumets
 * @argv: Array of arguments
 * @sscanf - Convert to int
 * Return: 1 and if it does not receive two arguments, print error.
 */
int main(int argc, const char *argv[])
{
int sum;
if (argc == 1 || argc == 2)
{
printf("%s\n", "error");
return (1);
}
else if (argc <= 3)
{
int num1;
int num2;
sscanf(argv[1], "%d", &num1);
sscanf(argv[2], "%d", &num2);
sum = num1 * num2;
printf("%d\n", sum);
return (0);
}
else
{
printf("%s\n", "error");
return (1);
}
return (0);
}
