#include "main.h"

/**
 * _strlen_recursion - lenght of a string
 * @s: a string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
		return(_strlen_recursion(s));

}
