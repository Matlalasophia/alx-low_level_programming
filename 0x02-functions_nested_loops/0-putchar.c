#include<stdio.h>
#include"main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
char strArr[] = {95, 112, 117, 116, 99, 104, 97, 114};
int arrL = sizeof(strArr) / sizeof(strArr[0]);
putcharMethod(strArr, arrL);
putchar('\n');
return (0);
}
