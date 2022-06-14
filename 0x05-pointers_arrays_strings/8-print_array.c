#include "main.h"

/**
 * print_array - function
 * @a: array of integers
 * @n: number of elements to print
 *
 * Description: prints the first n elements of an array, followed by a new line
 *
 * Return: nothing
	*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
