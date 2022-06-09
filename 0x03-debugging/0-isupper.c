#include "main.h"

/**
 * _isupper - function
 * @c: character to be checked
 *
 * Description: checks if a character is uppercase
 *
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	/* uppercase ASCII characters range from 65-90 */
	int output;

	if (c >= 65 && c <= 90)
	{
		output = 1;
	}
	else
	{
		output = 0;
	}

	return (output);
}
