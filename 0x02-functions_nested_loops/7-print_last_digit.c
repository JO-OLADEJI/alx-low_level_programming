#include "main.h"

/**
 * print_last_digit - function prototype
 * @number: the value to be changed
 *
 * Description: prints the last digit of a number
 *
 * Return: an integer
 */
int print_last_digit(int number)
{
	char lastDigit = number % 10;
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');
	return ((int) lastDigit);
}
