#include "main.h"
#include<unistd.h>
/**
 * _islower - check if a char is lowercase.
 * Return: 1 if char is lowercase, otherwise return 0.
 * @c: print return value
 */
int _islower(char c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
return (0);
}
