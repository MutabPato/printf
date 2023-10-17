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

	if (format == NULL)
		return (-1);

<<<<<<< HEAD
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
=======
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
>>>>>>> c0fe3192f1848c82b371d876f405c2a28ae7802a
}

