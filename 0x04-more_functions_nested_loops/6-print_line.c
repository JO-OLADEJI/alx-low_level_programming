#include "main.h"

/**
 * print_line - function
 * @n: length of line in terms of `_` character
 *
 * Description: draws a line on the terminal
 *
 * Return: no value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
