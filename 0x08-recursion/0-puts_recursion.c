#include "main.h"

/**
*_puts_recursion - prints a string followed by new line
*
*return : nothing
*/

void _put_recursion(char *s)
{
	if (*s == '\0')
		{
		_putchar ('\n');
		return;
		}

	_putchar (*s);
	_puts_recursion(s + 1);

}

