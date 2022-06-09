#include "main.h"

/**
 * _isdigit - function
 * @c: character to be checked
 *
 * Description: checks if the input is a digit from 0-9
 *
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	int output;

	/* digit ASCII characters range from 48-57 */
	if (c >= 48 && c <= 57)
	{
		output = 1;
	}
	else
	{
		output = 0;
	}

	return (output);
}
