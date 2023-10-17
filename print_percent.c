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
