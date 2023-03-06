#include "main.h"
#include<unistd.h>
/**
 * _putchar - writes the charecter i to stdout
 * @c: The charecter to print 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errono is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
