#include <stdio.h>

/**
 * main - Entry point
 * print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ph;

	for (ph = 'z'; ph >= 'a'; ph--)
	{

		putchar(ph);

	}

	putchar('\n');

	return (0);

}
