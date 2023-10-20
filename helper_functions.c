#include "main.h"
#include <unistd.h>

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
 * _itoa - converts an integer to a string
 * @num: integer
 *
 * Return: length of integer.
 */

int _itoa(int num)
{
	int i = 0, len;
	char arr[20];
	int isNeg = 0;

	if (num < 0)
	{
		isNeg = 1;
		num = -num;
	}
	if (num == 0)
	{
		write(1, "0", 1);
	}
	while (num > 0)
	{
		arr[i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	if (isNeg)
	{
		arr[i] = '-';
		i++;
	}
	while (i > 0)
	{
		len += write(1, &arr[i - 1], 1);
		i--;
	}
	return (len);
}

/**
 * unsigned_itoa - converts an unsigned integer to a string
 * @num: unsigned integer
 *
 * Return: length of unsigned integer.
 */

int unsigned_itoa(unsigned int num)
{
	int i = 0, len;
	char arr[20];

	if (num == 0)
		write(1, "0", 1);
	while (num > 0)
	{
		arr[i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	while (i > 0)
	{
		len += write(1, &arr[i - 1], 1);
		i--;
	}
	return (len);
}
