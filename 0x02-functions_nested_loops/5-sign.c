#include "main.h"

/**
 * print_sign - function prototype
 * @n: the character to be checked
 *
 * Description: creates a prototype for the print_sign function
 *
 * Return: 1 if c is positive, -1 if c is negative, and 0 otherwise
 */
int print_sign(int n)
{
	int output;

	if (n > 0)
	{
		_putchar('+');
		output = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		output = -1;
	}
	else
	{
		_putchar('0');
		output = 0;
	}

	return (output);
}
