#include "main.h"
/*
 * print_integer - replace format specifier with integer
 * @args : arguments passed to the function
 *
 * Return : length of output.
 */
int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int len = _itoa(num);
	return (len);
}
