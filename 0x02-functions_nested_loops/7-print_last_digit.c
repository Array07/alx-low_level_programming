#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be printed
 * Return:Value of the last digit of a number
 */
int print_last_digit(int n)
{
	int n;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
