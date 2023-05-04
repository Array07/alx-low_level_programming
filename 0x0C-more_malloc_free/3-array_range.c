#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum range of values to be stored
 * @max: maximum range of values to be stored
 * Return: the pointerto the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);
}
