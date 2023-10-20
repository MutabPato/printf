#include "main.h"

/**
 * print_binary - converts unsigned integer to binary
 * @args: arguments passed to the function
 *
 * Return: binary of unsigned integer.
 */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char arr[20];
	int i, len;

	i = 0;
	while (num > 0)
	{
		arr[i] = num % 2 + '0';
		num = num / 2;
		i++;
	}
	while (i > 0)
	{
		len += write(1, &arr[i - 1], 1);
		i--;
	}
	return (len);
}

/**
 * unsigned_int - maps format specifier to an unsigned integer
 * @args: arguments passed to the function
 *
 * Return: length of an unsigned integer
 */

int unsigned_int(va_list args)
{
	unsigned int positive_num = va_arg(args, unsigned int);
	int len = unsigned_itoa(positive_num);

	return (len);
}

/**
 * print_octal - maps format specifier to print a number in base 8
 * @args: arguments passed to the function
 *
 * Return: octal number
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char arr[20];
	int i, len;

	i = 0;
	while (num > 0)
	{
		arr[i] = num % 8 + '0';
		num = num / 8;
		i++;
	}
	while (i > 0)
	{
		len += write(1, &arr[i - 1], 1);
		i--;
	}
	return (len);
}

/**
 * hex_low - maps format specifier to print a number in base 16,
 * in lower case letters.
 * @args: arguments passed to the function
 *
 * Return: hexadecimal number in lowercase
 */

int hex_low(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, j, rem, len = 0;
	char ch, arr[20];
	int num_arr[] = {10, 11, 12, 13, 14, 15};
	char letters[] = "abcdef";

	i = 0;
	j = 0;
	while (num > 0)
	{
		rem = num % 16;
		if (rem > 9)
		{
			for (j = 0; j < 6; j++)
			{
				if (rem == num_arr[j])
					ch = letters[j];
			}
			arr[i] = ch;
		}
		else
			arr[i] = rem + '0';
		num = num / 16;
		i++;
	}
	while (i > 0)
	{
		len += write(1, &arr[i - 1], 1);
		i--;
	}
	return (len);
}

/**
 * hex_upper - maps format specifier to print a number in base 16,
 * in upper case letters.
 * @args: arguments passed to the function
 *
 * Return: hexadecimal number in uppercase
 */

int hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, j, rem, len = 0;
	char ch, arr[20];
	int num_arr[] = {10, 11, 12, 13, 14, 15};
	char letters[] = "ABCDEF";

	i = 0;
	j = 0;
	while (num > 0)
	{
		rem = num % 16;
		if (rem > 9)
		{
			for (j = 0; j < 6; j++)
			{
				if (rem == num_arr[j])
					ch = letters[j];
			}
			arr[i] = ch;
		}
		else
			arr[i] = rem + '0';
		num = num / 16;
		i++;
	}
	while (i > 0)
	{
		len += write(1, &arr[i - 1], 1);
		i--;
	}
	return (len);
}
