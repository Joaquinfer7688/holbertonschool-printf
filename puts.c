#include "main.h"
#include <stdio.h>

/**
 * _puts - main function
 * @str: pointer variable
 *
 */
void _puts(const char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
