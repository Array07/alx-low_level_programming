#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content an array of integers
 * @n: Number of elements of an array
 * @a: An array of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n++] = temporary;
	}
}
