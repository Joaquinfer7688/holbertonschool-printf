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
long int process_int(va_list args)
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
long int print_number(long int num)
{
	int count = 0;
	char digit;
	char *min = "2147483648";
	char *max = "2147483647";

	if (num == INT_MIN)
	{
		write(1, min, 10);
		return (10);
	}

	if (num == INT_MAX)
	{
		write(1, max, 10);
		return (10);
	}

	if (num < 0)
	{
		write(1, "", 1);
		num = -num;
		count++;
	}

	if (num / 10 != 0)
		count += print_number(num / 10);

	digit = (num % 10) + '0';
	write(1, &digit, 1);

	return (count + 1);
}
