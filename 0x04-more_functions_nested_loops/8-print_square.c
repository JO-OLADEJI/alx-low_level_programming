#include "main.h"

/**
 * print_square - function
 * @size: length of side in terms of `#` character
 *
 * Description: prints a square on the screen
 *
 * Return: no value
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
