#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: The number to be printed
 * Return:k  Value of the last digit of a number
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
	{
		k = -k;
	}
	return (k);
}
