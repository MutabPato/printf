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
	char newline = '\n';

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (format[0] == '%' && format[1] == '\n')
		write(1, &newline, 1);

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
