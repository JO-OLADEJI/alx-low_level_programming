#include "main.h"

/**
 * print_alphabet - custom function
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: nothing (void)
 */
void print_alphabet(void)
{
	char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int length = sizeof(alphabets) / sizeof(alphabets[0]);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(alphabets[i]);
	}

	_putchar('\n');
	return;
}
