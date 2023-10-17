#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int process_format_specifier(const char **format, va_list args)
int print_char(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int print_percent(void);

int _strlen(char *str);
int _itoa(int num);

#endif /* MAIN_H */
