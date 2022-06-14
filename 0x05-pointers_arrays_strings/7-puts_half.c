#include "main.h"

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
	}
	else
	{
		char_print_count = len / 2;
	}

	for (i = char_print_count; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
