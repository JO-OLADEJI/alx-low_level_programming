#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints all digits in the hexadecimal base
 *
 * Return: zero (0) if run successfully
 */
int main(void)
{
	char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'a', 'b', 'c', 'd', 'e', 'f'};
	int count = sizeof(hexDigits) / sizeof(hexDigits[0]);
	int i;

	for (i = 0; i < count; i++)
	{
		putchar(hexDigits[i]);
	}

	putchar('\n');
	return (0);
}
