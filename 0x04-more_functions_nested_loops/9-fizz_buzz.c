#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints the numbers 1 - 100 followed by a new line.
 * But for multiples of 3, `Fizz` is printed instead of the number and
 * for multiples of 5, print `Buzz`. For numbers which are multiples of
 * both 3 and 5, `FizzBuzz` is printed.
 *
 * Return: zero
 */
int main(void)
{
	const int max = 100;
	int i;

	for (i = 1; i <= max; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != max)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
