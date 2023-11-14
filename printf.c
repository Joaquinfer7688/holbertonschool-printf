#include "main.h"



int _printf(const char *format, ...)
{
	int i, scont, cont = 0;
	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++) // initalize variable i for counter, and iterate the array
	{
		if (format[i] != '\0') // verify if the array had content
		{
			if (format[i] == '%') // checks for %
			{
				i++;
			}
			if (format[i] == 'c') // checks type of content
			{
				while (format[i + 1] != '\0') // iterate the string
				{
					i++;
					_putchar(va_arg(args, char)); // prints the position of the string
				}
			}
			else if (format[i] == 's')
			{
				scont = putss(va_args(args, *char));
				i++;
				cont += (scont - 1);
			}
			else if (format[i] == '%')
			{
				_putchar("\%");
			
			}
		}
	}
	va_end(args);
	return (cont);
}
