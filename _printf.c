#include <stdarg.h>
#include <unistd.h>
int _strlen(char *str);

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed excluding the null byte 
 */

int _printf(const char *format, ...)
{
	va_list args;
	char *str;
	int len, j;

	j = 0;
	while (*format)
	{
		if (format[j] == '%')
		{
			switch (format[j+1])
			{
				case 'c':
					va_arg(args, int);
					break;
				case 's':
					va_arg(args, char *);
					break;
				default:
					break;
			}
			j++;
		}
	}
	va_start(args, format);
	str = va_arg(args, char *);
	len = _strlen(str);
	va_end(args);
	return (len);
}

/**
 * _strlen - finds string length
 * @str: pointer to string
 *
 * Return: string length.
 */

int _strlen(char *str)
{
	int i;
	int length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
