#include "main.h"
/**
 * _printf - Main function
 * @format: Pointer
 * Return: char_print
 */
int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list list_of_args;

	if (format == NULL)
		return (-1);

	va_start(list_of_args, format);
	char_print = process_format(format, list_of_args);
	va_end(list_of_args);

	return (char_print);
}

/**
 * process_format - function
 * @format: pointer
 *@args: va list
 * Return: return
 */
int process_format(const char *format, va_list args)
{
	int char_print = 0;
	char c, *str;

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_print++; }
		else
		{
			format++;
			if (*format == '\0')
				return (-1);

		if (*format == '%')
		{
			write(1, format - 1, 1);
			char_print++; }
		else if (*format == 'c')
		{
			c = va_arg(args, int);
			write(1, &c, 1);
			char_print++; }
		else if (*format == 's')
		{
			str = va_arg(args, char*);
			if (str == NULL)
			{
				write(1, "(null)", 6), char_print += 6; }
			else
			{
				char_print += process_str(str); }
		}
		else if (*format == 'd' || *format == 'i')
		{
			char_print += process_int(args);
		}
		else
		{
			write(1, format - 1, 2), char_print += 2; }
		}
		format++; }
	return (char_print);
}
