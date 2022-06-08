#include "main.h"

/**
 * _abs - function prototype
 * @val: the value to be changed
 *
 * Description: computes the absolute value of an integer
 *
 * Return: an integer
 */
int _abs(int val)
{
	int output;

	if (val < 0)
	{
		output = -1 * val;
	}
	else
	{
		output = val;
	}

	return (output);
}
