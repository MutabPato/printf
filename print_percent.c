#include "main.h"
/*
 * print_percent - replace format specifier with %
 * @args : arguments passed to the function
 *
 * Return : length of output.
 */
int print_percent(void)
{
	char symbol = '%';
	return (write(1, &symbol, 1));
}
