#include "main.h"
/**
 * is_prime_number - function that returns 1 if the integer is aprime number.
 *@n: number to be tested.
 * Return: returns 1 if the input integer is a prime number
 * otherwise returns 0 if number is not a prime
 */
int is_prime_number(int n)
{
int _is_prime = 0;
if (n < 2)
_is_prime = 0;
else if (n == 2)
_is_prime = 1;
else if (n % 2 == 1)
_is_prime = 1;
return (_is_prime);
}
