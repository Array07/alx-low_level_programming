#include "main.h"
/**
 * print_alphabet - Prints the alphabet 10 times
 * Return: void
*/
print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
