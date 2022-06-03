#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints alphabets in lowercase, then uppercase, followed by
 * a new line
 *
 * Return: zero (0) is run successfully
 */
int main(void)
{
	char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z'};
	char ALPHABETS[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
	'Y', 'Z'};
	int length1 = sizeof(alphabets) / sizeof(alphabets[0]);
	int length2 = sizeof(ALPHABETS) / sizeof(ALPHABETS[0]);
	int i;

	for (i = 0; i < length1; i++)
	{
		putchar(alphabets[i]);
	}

	for (i = 0; i < length2; i++)
	{
		putchar(ALPHABETS[i]);
	}

	putchar('\n');
	return (0);
}
