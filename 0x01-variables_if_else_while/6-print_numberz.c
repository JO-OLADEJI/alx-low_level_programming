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
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}
