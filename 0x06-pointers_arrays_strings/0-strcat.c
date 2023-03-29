#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @src: Source string pointer.
 * @dest: Destination string pointer.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
