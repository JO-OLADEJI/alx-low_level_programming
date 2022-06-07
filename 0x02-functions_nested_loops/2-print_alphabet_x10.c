#include "main.h"

/**
 * print_alphabet - custom function
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: nothing (void)
 */
void print_alphabet_x10(void)
{
	char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int length = sizeof(alphabets) / sizeof(alphabets[0]);
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < length; j++)
		{
			_putchar(alphabets[j]);
		}

		_putchar('\n');
	}
}
