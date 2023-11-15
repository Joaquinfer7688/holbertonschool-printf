#include "main.h"
/**
 * _printf - Main function
 * @format: Pointer
 * Return: Counter
 */
int _printf(const char *format, ...)
{
	int i, j, k, cont = 0;
	va_list args;
	char *s;

	va_start(args, format);
	j = 0;

	while (format[j] != '\0')
	{
		if (format[j] == '%') /* checks for % */
		{
			j++;
			if (format[j] == '%')
			{
				write(1, "%", 1);
				cont++; }
			else if (format[j] == 'c')
			{
				i = va_arg(args, int);
				write(1, &i, 1); /* prints the position of the string */
				cont++; }
			else if (format[j] == 's')
			{
				k = 0;
				s = va_arg(args, char *);
				while (s[k] != '\0')
				{
					write(1, &s[k], 1);
					k++;
					cont++; }
			}
			else
			{
				write(1, "%", 1);
				cont++;
		       		write(1, &format[j], 1);
				cont++;
			}
		}
			else
			{
				write(1, &format[j], 1);
				cont++;
			}
			j++;
	}
	va_end(args);
	return (cont);
}
