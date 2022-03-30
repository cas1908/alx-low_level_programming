#include "main.h"

/**
 * _puts_recursion - To print a string
 * @s: a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion("%s \n");
	}
	else
		_putchar('\n');
}
