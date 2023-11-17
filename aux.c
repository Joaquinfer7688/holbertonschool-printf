#include "main.h"

/**
 * process_str - Function
 * @str: pointer
 * Return: return
 */
int process_str(const char *str)
{
	int str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	write(1, str, str_len);
	return (str_len);
}

/**
 * process_int - Process an integer and write it to stdout
 * @args: Variable arguments list
 * Return: Number of characters printed
 */
int process_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	count += print_number(num);

	return (count);
}

/**
 * print_number - Recursively print digits of a number
 * @num: Non-negative integer
 * Return: Number of digits printed
 */
long print_number(long num)
{
	int count = 0, len, i;
	char digit;
	char *buffer;
	bool negative = false;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	buffer = malloc(sizeof(char) * 100);
	len = 0;

	do {
		digit = (num % 10) + '0';
		buffer[len++] = digit;
		num /= 10;
	} while (num > 0);
	if (negative)
	{
		len++;
	}
	for (i = len - 1; i >=0; i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}
	return (count);
}
