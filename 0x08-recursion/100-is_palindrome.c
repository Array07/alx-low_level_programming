#include "main.h"
#include <stdio.h>
int check_pal(char *s, int j, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: String to be reverse
 * Return: 0 if it is not, 1 if it is a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: String whose length is to be calculated
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - Checks the characters recursively for palindrome
* @s:String to be checked
* @j:iterator
* @len:length of the string
* Return: 0 if it is not, 1 if it is
*/
int check_pal(char *s, int j, int len)
{
if (*(s + j) != *(s + len - 1))
return (0);
if (j >= len)
return (1);
return (check_pal(s, j + 1, len - 1));
}
