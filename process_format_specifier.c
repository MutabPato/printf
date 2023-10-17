#include "main.h"

/**
 * process_format_specifier - handles format specifiers and calls the
 * appropriate print functions.
 * @format: a pointer to a character pointer, which points to the current
 * position within the format string. It is updated to point to the next
 * character after processing the specifier.
 * @args: a `va_list` containing the variable arguments that may be required
 * to process certain specifiers.
 *
 * Return: the number of characters printed as a result of handling the
 * format specifier. Returns 0 if an unsupported or unknown specifier
 * is encountered, indicating an error.
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
		default:
			print_percent();
			write(1, format, 1);
			return (0);
	}
}
