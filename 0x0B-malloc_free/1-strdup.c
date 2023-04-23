#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - String to be duplicated to a new memory space location
 * @str: string given as parameter
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *aaa;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	aaa = malloc(sizeof(char) * (j + 1));

	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
