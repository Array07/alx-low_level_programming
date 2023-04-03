#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area.
 * @n: number of byte
 * @src: Source pointer
 * @dest: Destination pointer
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int j = n;

	for (; r < j; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
