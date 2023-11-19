# `printf`

Write your own `printf` function

## Overview
This proyect contains a custom implementation of the `printf` function in C, named `_printf`capable of printing with the %d, %c, %s and %% specifiers to standar output.
`printf` returns the number of the characters printed (excluding the null byte at the end of strings).
We were not asked to handle flag characters, field width, precision or length.

## Function Description
## Prototype
```c
int _printf(const char *format, ...);
```c
# Conversion Specifiers

| Specifiers |                             Description                            |
|------------|:------------------------------------------------------------------:|
| %c         |                      Prints a single character                     |
| %s         |                    Prints a string of characters                   |
| %d         |                       Prints a decimal number                      |
| %i         |                          Prints an integer                         |
| %u         |                       Prints an unsigned int                       |
| %b         |          Convert a decimal number to binary and prints it          |
| %0         |           Convert a decimal number to octal and prints it          |
| %x         | Convert a decimal number to hexadecimal and prints it in lowercase |
| %X         | Convert a decimal number to hexadecimal and prints it in uppercase |
