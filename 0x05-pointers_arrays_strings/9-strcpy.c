# include "main.h"

/**
 * _strcpy - function
 * @dest: array of integers
 * @src: number of elements to print
 *
 * Description: copies the string pointed to by src to the buffer pointed to
 * by dest
 *
 * Return: pointer to dest
	*/
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
