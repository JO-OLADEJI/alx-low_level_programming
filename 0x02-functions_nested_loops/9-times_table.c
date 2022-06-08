#include "main.h"

/**
 * times_table - function
 *
 * Description: creates a prototype for the times_table function
 *
 * Return: no value
 */
void times_table(void)
{
	int tableCap = 9;
	int i;
	int j;
	int product;

	for (i = 0; i <= tableCap; i++)
	{
		for (j = 0; j <= tableCap; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(' ');

				if (product < 10)
				{
					_putchar(' ');
				}
				if (product > 9)
				{
					_putchar((product / 10) + 48);
				}
				_putchar((product % 10) + 48);
			}
			else
			{
				_putchar(48);
			}

			if (j != tableCap)
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
