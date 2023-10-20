#include "main.h"

/**
 * process_format_specifier - handles format specifiers and calls the
 * appropriate print functions.
 * @format: a double pointer pointing to the format string.
 * @args: a `va_list` containing the variable arguments.
 *
 * Return: the number of characters printed. Returns 0 if an
 * unsupported or unknown specifier is encountered, indicating an error.
 */

int process_format_specifier(const char **format, va_list args)
{
	if (args == NULL)
		return (-1);
	switch (**format)
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_string(args));
		case '%':
			return (print_percent());
		case 'd':
		case 'i':
			return (print_integer(args));
		case 'b':
			return (print_binary(args));
		case 'u':
			return (unsigned_int(args));
		case 'o':
			return (print_octal(args));
		case 'x':
			return (hex_low(args));
		case 'X':
			return (hex_upper(args));
		case 'p':
			return (print_address(args));
		default:
			print_percent();
			write(1, *format, 1);
			return (0);
	}
}
