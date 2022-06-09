#include "main.h"

/**
 * print_numbers - function
 *
 * Description: outputs the numbers 0-9, followed by a new line
 *
 * Return: no value
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
