#include "main.h"

/**
 * print_rev - function
 * @s: pointer to a string
 *
 * Description: prints the string in reverse, followed by a new line
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
