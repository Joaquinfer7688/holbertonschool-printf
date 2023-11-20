# `C - printf`

Write your own `printf` function

![alt text](https://github.com/Joaquinfer7688/holbertonschool-printf/blob/master/title.jpeg)

## Overview
This proyect contains a custom implementation of the `printf` function in C, named `_printf` capable of printing with the %d, %c, %s and %% specifiers to standar output.`printf` returns the number of the characters printed (excluding the null byte at the end of strings).
We were not asked to handle flag characters, field width, precision or length.

# Function Description
## Prototype
```c
int _printf(const char *format, ...);
```
## Conversion Specifiers
| Specifiers  | Description |
| ------------- |:-------------:|
| `%c`          | Prints a single character     |
| `%s`          | Prints a string of characters |
| `%d`          | Prints a decimal number       |
| `%i`          | Prints an integer              |
| `%u`          | Prints an unsigned int         |
| `%b`          | Convert a decimal number to binary and prints it|
| `%o`          | Convert a decimal number to octal and prints it |
| `%x`| Convert a decimal number to hexadecimal and prints it in lowercase|
| `%X` |Convert a decimal number to hexadecimal and prints it in uppercase|

## Examples:
```c
_printf("Character:[%c]\n", 'H');
output: Character:[H]
```

```c
 _printf("String:[%s]\n", "I am a string !");
output: String:[I am a string !]
```

```c
len = _printf("Percent:[%%]\n");
output: Percent:[%]
```

```c
_printf("Length:[%d, %i]\n", len, len);
output: Length:[39, 39]
```

## Compile
The command to compile your files is: 
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Function prototypes
All function prototypes used to compile and libraries are includen in header file "main.h":
* int process_format(const char * format, va_list args);
* int process_str(const char * str);
* long int print_number(long int num);
* long int process_int(va_list args);

## File description
* **printf.c** - contain the function _printf()
* **aux.c** - contain the function process_format(), process_str(), print_number() and process_int()
* **main.h** - contain the prototypes of all functions and libraries

## Flowchart
![alt text](https://github.com/Joaquinfer7688/holbertonschool-printf/blob/master/flowchart.png)
## Authors
- Joaquin Fernández - [Github](https://github.com/Joaquinfer7688), Holberton School #Cohort 22
- Germán Silveira - [Github](https://github.com/Daldanos), Holberton School #Cohort 22
