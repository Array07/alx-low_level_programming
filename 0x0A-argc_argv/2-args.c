#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
