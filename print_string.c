#include "main.h"
/*
 * print_str - replace format specifier with string
 * @args : arguments passed to the function
 *
 * Return : character to be printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str);
	return (write(1, str, len));
}
