#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: allocate memory for an array
 * @size: bytes of allocated memory
 * Return:return NULL, if malloc fails, or nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	for (d = 0; d < (nmemb * size); d++)
		b[d] = 0;
	return (b);
}
