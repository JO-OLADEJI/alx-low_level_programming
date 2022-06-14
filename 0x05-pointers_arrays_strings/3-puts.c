#include "main.h"

/**
 * _puts - function
 * @str: pointer to a string
 *
 * Description: prints the string followed by a new line
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
