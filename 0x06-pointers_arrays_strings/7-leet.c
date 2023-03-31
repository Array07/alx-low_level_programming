#include "main.h"
#include <stdio.h>

/**
*leet - Function that encode a string into 1337
*@s: pointer to string.
*Letters a and A should be replaced by 4
*Letters e and E should be replaced by 3
*Letters o and O should be replaced by 0
*Letters t and T should be replaced by 7
*Letters l and L should be replaced by 1
*
*Return: pointer to s
*/
char *leet(char *s)
{
	int string_length, leetcount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetnumbers[] = "4433007711";

	/* scan through string */
	string_length = 0;
	while (s[string_length] != '\0')
		/* check whether leetLetter is found */
	{
		leetcount = 0;
		while (leetcount < 10)
		{
			if (leetLetters[leetcount] == s[string_length])
			{
				s[string_length] = leetnumbers[leetcount];
			}
			leetcount++;
		}
		string_length++;
	}
	return (s);
}
