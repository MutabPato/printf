#include "main.h"

/**
 * print_char - replace format specifier with character
 * @args: arguments passed to the function
 *
 * Return: character to be printed.
 */

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	return (write(1, &ch, 1));
}

/**
 * print_string - replace format specifier with string
 * @args: arguments passed to the function
 *
 * Return: character to be printed.
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str);

	if (str == NULL)
		str = "(nul)";

	return (write(1, str, len));
}

/**
 * print_address - prints the memory address of a string
 * @args: arguments passed to the function
 *
 * Return: memory address location
 */

void print_address(va_list args)
{
	void *str = va_arg(args, void *);

	if (str == NULL)
		str = "(nul)";
	(write(1, str, 8));
}
