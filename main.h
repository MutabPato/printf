#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int process_format_specifier(const char **format, va_list args);
int print_char(va_list args);
int print_string(va_list args);
void print_address(va_list args);
int print_percent(void);
int print_integer(va_list args);
int print_binary(va_list args);
int unsigned_int(va_list args);
int print_octal(va_list args);
int hex_low(va_list args);
int hex_upper(va_list args);

int _strlen(char *str);
int _itoa(int num);
int unsigned_itoa(unsigned int num);

#endif /* MAIN_H */
