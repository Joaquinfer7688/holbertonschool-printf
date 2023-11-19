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
```
# Conversion Specifiers
|Specifiers|Functions|Description| 
|--|--|--|
|s|print string|print a string| 
|c|print char|print just a char| 
|i|print integer|print a number in base 10|
|d|print integer|print a number in base 10|
|p|print pointer|print a memory address in base 16 lowercase| 
|b|print binary|print a number in base 2|
|x|print hexadecimal low|print a number in base 16 lowercase| 
|X|print hexadecimal upp|print a number in base 16 uppercase|
|o|print octal|print a number in base 8| 
|R|print rot|print a string encoded in rot13 format|
