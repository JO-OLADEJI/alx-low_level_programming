#include "main.h"

/**
 * print_diagonal - function
 * @n: length of line in terms of `\` character
 *
 * Description: print a diagonal line to the screen
 *
 * Return: no value
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
