#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

int _printf(const char *format, ...);

int process_format(const char *format, va_list args);
int process_str(const char *str);
long print_number(long num);
int process_int(va_list args);

#endif
