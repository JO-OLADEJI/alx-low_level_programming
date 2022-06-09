#include <stdio.h>

int is_prime(long);

/**
 * main - entry point of program
 *
 * Description: computes the largest prime factor of the number 612852475143
 *
 * Return: always 0
 */
int main(void)
{
	long number = 61285247514L;
	long half = number / 2;
	long largest_prime_factor;
	long i;

	for (i = 1; i <= half; i++)
	{
		if (number % i == 0 && is_prime(i))
		{
			largest_prime_factor = i;
		}
	}

	printf("%ld\n", largest_prime_factor);
	return (0);
}

/**
 * is_prime - custom function
 * @n: number to be checked
 *
 * Description: checks if a number is prime
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long n)
{
	int output = 1;
	long half_n = n / 2;
	long i;

	if (n == 1)
	{
		output = 0;
	}
	else
	{
		for (i = 2; i <= half_n; i++)
		{
			if (n % i == 0)
			{
				output = 0;
				break;
			}
		}
	}

	return (output);
}
