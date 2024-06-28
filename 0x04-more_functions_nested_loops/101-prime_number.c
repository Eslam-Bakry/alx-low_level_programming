#include "main.h"

/**
* print_number - Prints an int number
* @n: number to output
*
*/
void print_number(int n)
{
	unsigned int abs_number = n;

	if (n < 0)
	{
		_putchar('-');
		abs_number = -abs_number;
	}
	if (abs_number / 10)
	{
		print_number(abs_number / 10);
	}
	_putchar('0' + abs_number % 10);
}
