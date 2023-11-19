# Holberton School - _printf

##printf

Write your own `printf` function

## Overview
This proyect contains a custom implementation of the `printf` function in C, named `_printf`capable of printing with the %d, %c, %s and %% specifiers to standar output.
`printf` returns the number of the characters printed (excluding the null byte at the end of strings).
We were not asked to handle flag characters, field width, precision or length.

## Function Description
#Prototype
```c
int _printf(const char *format, ...);
#Conversion Specifiers
| Specifiers | Description |
|----------|----------|
| `%c`     | Cell 2   |
| `%s`     | Cell 5   |
| `%d`     | Cell 8   |
