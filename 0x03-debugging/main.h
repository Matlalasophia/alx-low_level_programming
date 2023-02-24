#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* positive_or_negative - tests function that prints if int i is positive or negative
* Return: i
* Parameter: i 
* i - must be greater than 0
* Return - i
*/
int positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
if (i < 0)
{
printf("%d is negative\n", i);
}
return (i);
}
#endif /* MAIN_H */
