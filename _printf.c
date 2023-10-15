#include <stdarg.h>
#include <unistd.h>
#include <string.h>

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
  int len;
  
  va_start(args, format);
  str = va_arg(args, char *);
  len = strlen(str);
  va_end(args);
  return (len);
}