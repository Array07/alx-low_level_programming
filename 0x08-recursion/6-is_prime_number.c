#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number
 * @n: Natural number to evalute
 * 
 *Return: if input integer is prime return 1, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
return  (n - 1);
}
/**
 * actual_prime - Calculates if the iput integer is a prime recursively
 * @n:Integer to be evaluted
 * @i: iterator
 *
 * Return: 1 if prime, otherwise 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
