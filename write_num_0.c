#include "main.h"

/**
 * print_percent - replace format specifier with %
 *
 * Return: length of output.
 */

int print_percent(void)
{
	char symbol = '%';

	return (write(1, &symbol, 1));
}

/**
 * print_integer - replace format specifier with integer
 * @args: arguments passed to the function
 *
 * Return: length of output.
 */

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int len = _itoa(num);

	if (len < 0)
		return (-1);

	return (len);
}
