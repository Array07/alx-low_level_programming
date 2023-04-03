#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills the memory with a constant byte.
 * @n: Number of bytes of the memory area.
 * @b: Constant byte.
 * @s: Pointer to the memory area.
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
	}
	return (s);
}
