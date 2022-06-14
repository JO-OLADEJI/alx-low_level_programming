#include "main.h"

/**
 * puts2 - function
 * @str: the string to reverse
 *
 * Description: prints every other characted in a string, starting from the
 * first character, follwed by a new line.
 *
 * Return: nothing
	*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
