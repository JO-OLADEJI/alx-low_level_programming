#include "main.h"

/**
 * _strlen - function
 * @s: pointer to a string
 *
 * Description: returns the length of a string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
