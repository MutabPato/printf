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
	switch (**format)
	{
		case 'c':
			(*format)++;
			return print_char(args);
		case 's':
			(*format)++;
			return print_string(args);
		case '%':
			(*format)++;
			return print_percent();
		case 'd':
		case 'i':
			(*format)++;
			return print_integer(args);
		default:
			return (0);
	}
}
