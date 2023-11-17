#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);

int process_format(const char *format, va_list args);
int process_str(const char *str);
int print_number(int num);
int process_int(va_list args);

#endif
