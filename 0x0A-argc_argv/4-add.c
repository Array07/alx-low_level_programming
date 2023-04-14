#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check - string if there are digits
 * @str: array string
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check str if there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argv: array of argument
 * @argc: number of argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaring varaibles*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			/* atoi --> convert string to int*/
			sum += str_to_int;
		}
		/*condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);/*print the sum*/
	return (0);
}
