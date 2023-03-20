#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
/**
 * main - program that adds positive numbers.
 * @argc: size of arguments
 * @argv: array arguments
 * Return: 1 if num contains symblos that are not digits, print Erro.
 */
int main(int argc, const char *argv[])
{
int sum = 0;
int i;
int b;
int c;
bool isSymbol = false;
if (argc == 1)
{
printf("%s\n", "0");
}
if (argc == 2)
{
printf("%s\n", "Error");
}
if (argc >= 3)
{
for (i = 1; i < argc ; i++)
{
for (c = 33; c <= 47; c++)
{
if (*argv[i] != c)
{
continue;
}
else
{
isSymbol = true;
break;
}
}
for (c = 58; c <= 126; c++)
{
if (*argv[i] != c)
{
continue;
}
else
{
isSymbol = true;
break;
}
}
continue;
}
if (isSymbol)
{
printf("%s\n", "Error");
return (1);
}
else
{
for (i = 1; i < argc ; i++)
{
for (b = 48; b <= 57; b++)
{
if (*argv[i] == b)
{
sum = sum + atoi(argv[i]);
}
}
}
printf("%d\n", sum);
}
}
return (0);
}
