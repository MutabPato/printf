#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to a string
 *
 * Return: string length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * get_int_length - returns the length of an integer.
 * @num: integer
 *
 * Return: integer length
 */

int get_int_length(int num)
{
	int len = 0;

	if (num == 0)
		return (1);
	if (num < 0)
		len++;

	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}
