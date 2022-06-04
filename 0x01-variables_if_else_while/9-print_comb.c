#include <stdio.h>

/**
 * main - entry function of program
 *
 * Description: prints single digits numbers seperated by a comma and
 * whitespace
 *
 * Return: zero (0) if run successfully
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
