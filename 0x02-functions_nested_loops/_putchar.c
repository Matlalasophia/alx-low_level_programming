#include "main."
#include <unistd.h>
/**
 * _putchar - write the charecter c to stdout
 * On error, -1 is returned, and error is set appropriately
 * Return: On success 1.
 */
int -putchar(char c)
{
return (write(1, &c, 1));
}
