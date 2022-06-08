#include "main.h"

/**
 * jack_bauer - custom function
 *
 * Description: print every minute of the day
 *
 * Return: no value
 */
void jack_bauer(void)
{
	int hoursInDay = 24;
	int minutesInHour = 60;
	int h;
	int m;

	for (h = 0; h < hoursInDay; h++)
	{

		for (m = 0; m < minutesInHour; m++)
		{
			if (h < 10)
			{
				_putchar(48);
			}
			else
			{
				_putchar((h / 10) + 48);
			}
			_putchar((h % 10) + 48);
			_putchar(':');

			if (m < 10)
			{
				_putchar(48);
			}
			else
			{
				_putchar((m / 10) + 48);
			}
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
