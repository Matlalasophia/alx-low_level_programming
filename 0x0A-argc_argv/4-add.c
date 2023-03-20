#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
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
int a;
int strLen;
char c;
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
strLen = strlen(argv[i]);
for (a = 0;  strLen > a; a++)
{
c = argv[i][a];
if (isdigit(c))
{
continue;
}
else
{
isSymbol = true;
break;
}
}
if (isSymbol)
{
printf("%s\n", "Error");
return (1);
break;
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
