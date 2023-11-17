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
        return -1;

        va_start(list_of_args, format);

        while (*format)
        {
                if (*format != '%')
                {
                        write(1, format, 1);
                        char_print++;
                }
        else
        {
                format++;
                if (*format == '\0')
		return -1;

        if (*format == '%')
        {
                write(1, format - 1, 1);
                char_print++;
        }

        else if (*format == 'c')
        {
                char c = va_arg(list_of_args, int);
                write(1, &c, 1);
                char_print++;
        }

        else if (*format == 's')
        {
                char *str = va_arg(list_of_args, char*);
                if (str == NULL)
                {
                        write(1, "(null)", 6);
                        char_print += 6;
                }
                else
                {
                        int str_len = 0;
                        while (str[str_len] != '\0')
                                str_len++;
                        write(1, str, str_len);
                        char_print += str_len;
                }
        }
        else
        {
                write(1, format-1, 2);
                char_print+=2;
        }
        }
                format++;
        }

        va_end(list_of_args);
        return char_print;
}
