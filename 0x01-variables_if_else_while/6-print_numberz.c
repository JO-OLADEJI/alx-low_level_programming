#include <stdio.h>

/**
 * main - entry function of program
 *
 * Description: print every single digits in base 10 numbers
 *
 * Return: zero (0) is fun successfully
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
