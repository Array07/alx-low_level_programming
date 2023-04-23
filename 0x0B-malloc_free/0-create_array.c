#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: Size of an array
 * @c: Char to be assigned
 * Return:pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
