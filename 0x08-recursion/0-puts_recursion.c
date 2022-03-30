#include "main.h"

/**
 * _puts_recursion - To print a string
 * @s: a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	_puts_recursion("%s \n");
	return;
}
