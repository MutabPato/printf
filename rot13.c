#include "main.h"

/**
 * get_rot13_char - gets the character of a string
 * @input_char: a character
 *
 *Return: the mapped character.
 */

char get_rot13_char(char input_char)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	for (; i < 52; i++)
	{
		if (input_char == input[i])
			break;
	}
	return (output[i]);
}

#include "main.h"

/**
 * print_rot13 - rotates the alphabet 13 characters
 * @args: arguments passed to the function.
 *
 *Return: the length of the string
 */

int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	char rot;
	int len = _strlen(str);

	while (*str)
	{
		rot = get_rot13_char(*str);
		write(1, &rot, 1);
		str++;
	}
	return (len);
}
