#include "main.h"

/**
 * swap_int - function
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Description: swaps the value of two integers using pointers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;
	int temp_b = *b;

	*a = temp_b;
	*b = temp_a;
}
