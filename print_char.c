#include "main.h"
/*
 * print_char - replace format specifier with character
 * @args : arguments passed to the function
 *
 * Return : character to be printed.
 */
int print_char(va_list args)
{
	char c = va_args(args, int);
	return (write(1, &ch, 1));
}
