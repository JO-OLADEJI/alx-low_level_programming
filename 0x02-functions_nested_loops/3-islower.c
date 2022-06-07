#include "main.h"

/**
 * _islower - function prototype
 * @c: the character to be checked
 *
 * Description: creates a prototype for the _islower function
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char lowercase_alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
	'w', 'x', 'y', 'z'};
	int length = sizeof(lowercase_alphabets) / sizeof(lowercase_alphabets[0]);
	int i;
	int retValue = 0;

	for (i = 0; i < length; i++)
	{
		if (lowercase_alphabets[i] == c)
		{
			retValue = 1;
			break;
		}
	}

	return (retValue);
}
