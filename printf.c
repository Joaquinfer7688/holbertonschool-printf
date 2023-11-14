#include "main.h"



int _printf(const char *format, ...)
{
	int i, cont = 0;
	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++) /* initalize variable i for counter, and iterate the array */
	{
			if (format[i] == '%') /* checks for % */
			{
				i++;
				if (format[i] == 'c') /* checks type of content */
				{
					_putchar(va_arg(args, int)); /* prints the position of the string */
				}
				else if (format[i] == 's')
				{
					cont += fputs(va_arg(args, char *), stdout);
				}
				else if (format[i] == '%')
				{
					_putchar('%');
			
				}
			}
			else
			{
				_putchar(format[i]);
			}
		}

		va_end(args);
		return (cont);
}
