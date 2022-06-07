#include "main.h"

/**
 * _isalpha - function prototype
 * @c: the character to be checked
 *
 * Description: creates a prototype for the _isalpha function
 *
 * Return: 1 if c is a leter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	/* ascii value for a-z is 65 - 90 */
	/* ascii value for A-Z is 97 - 122 */

	int output = 0;

	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 122))
	{
		output = 1;
	}

	return (output);
}
