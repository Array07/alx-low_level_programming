#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: input integers
 * @b: input integers
 *
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
