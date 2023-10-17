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
<<<<<<< HEAD

=======
>>>>>>> c0fe3192f1848c82b371d876f405c2a28ae7802a
	return (write(1, &ch, 1));
}
