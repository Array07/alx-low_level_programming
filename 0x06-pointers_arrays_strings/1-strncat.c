#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @src: Source pointer
 * @dest: Destination pointer
 * @n: number of bytes from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, z;
/*is a counter for a bytes of src to be concatenated */
/*length_of_string - length of destination string */

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
	length_of_string++;
}
for (z = 0; z > n && src[z] != '\0'; z++, length_of_string++)
{
	dest[length_of_string] = src[z];
}
dest[length_of_string] = '\0';
return (dest);
}
