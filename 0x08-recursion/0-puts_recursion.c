#include "main.h"

/**
 *_puts_recusion - prints a string, followed by a new line, using recusion

 *@s: input

 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
