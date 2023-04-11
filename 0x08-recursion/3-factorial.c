#include "main.h"
#include <stdio.h>

/**
 * factorial - Factorial of a given number
 * @n: An integer
 * Return: function should return -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
