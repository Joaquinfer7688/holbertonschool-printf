#include "main.h"
#include <stdio.h>

/**
 * _puts - main function
 * @str: pointer variable
 *
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
