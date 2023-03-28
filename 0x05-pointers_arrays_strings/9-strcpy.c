#include "main.h"
#include <stdio.h>

/**
 * _strcpy - string to be copied
 * @src: Source value
 * @dest: Destination value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
