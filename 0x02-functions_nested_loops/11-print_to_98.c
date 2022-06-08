#include "main.h"

int absolute_value(int n);

/**
 * print_to_98 - function
 * @n: integer between -999 to 999
 *
 * Description: prints all natural numbers from n to 98,
 * followed by a new line
 *
 * Return: no value
 */
void print_to_98(int n)
{
	int stop = 0;

	while (stop != 1)
	{
		if (n < 0)
		{
			_putchar('-');
		}

		if (absolute_value(n) > 99)
		{
			_putchar((absolute_value(n) / 100) + 48);
		}

		if (absolute_value(n) > 9)
		{
			_putchar(((absolute_value(n) % 100) / 10) + 48);
		}

		_putchar((absolute_value(n) % 10) + 48);

		if (n == 98)
		{
			stop = 1;
			_putchar('\n');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			if (n < 98)
			{
				n++;
			}
			else
			{
				n--;
			}
		}
	}
}

/**
 * absolute_value - function
 * @n: integer parameter
 *
 * Description: compute the absolute value of an integer
 *
 * Return: positive integer or zero
 */
int absolute_value(int n)
{
	int output;

	if (n < 0)
	{
		output = -1 * n;
	}
	else
	{
		output = n;
	}

	return (output);
}
