#include<unistd.h>
/**
 * _putchar - writes charecter c to stdout
 * @c1 char to be printed
 * Return: on success 1
 */
int _putchar(char c){
return (write(1, &c, 1));
}
