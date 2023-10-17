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
	char ch, symbol, *str;
	int count, num_1, num_2, len;

	symbol = '%';
	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					ch = va_arg(args, int);
					write(1, &ch, 1);
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					write(1, str, _strlen(str));
					count += _strlen(str);
					break;
				case '%':
					write(1, &symbol, 1);
					count++;
					break;
				case 'd':
					num_1 = va_arg(args, int);
					len = _itoa(num_1);
					count += len;
					break;
				case 'i':
					num_2 = va_arg(args, int);
					len = _itoa(num_2);
					count += len;
					break;
				default:
					break;
			}
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
