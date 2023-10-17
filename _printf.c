#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 *
 * Return: no. of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += process_format_specifier(&format, args);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
