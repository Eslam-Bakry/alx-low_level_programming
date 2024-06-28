#include <stdio.h>

/**
* main - print the biggest prime number
* number 612852475143 is to be checked
* Return: Always 0.
*/

int main(void)
{
	long int big_prime, number, divider;

	number = 612852475143;
	for (big_prime = 1; big_prime <= number; big_prime++)
	{
		if (number % big_prime == 0)
		{
			if (number == big_prime)
			{
				printf("%ld\n", big_prime);
				break;
			}
			divider = number / big_prime;
			number = divider;
		}
	}
}
