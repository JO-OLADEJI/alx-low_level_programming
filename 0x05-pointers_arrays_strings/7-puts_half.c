#include "main.h"

/**
 * puts_half - function
 * @str: the string
 *
 * Description: prints the last half of the given string
 *
 * Return: nothing
	*/
void puts_half(char *str)
{
	int len;
	int char_print_count;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		char_print_count = (len - 1) / 2;
		for (i = char_print_count + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		char_print_count = len / 2;
		for (i = char_print_count; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
