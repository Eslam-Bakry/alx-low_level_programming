#include "main.h"

/**
* print_diagonal - Entry point
* @n: the number of times the character _ should be printed
* Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
int number_of_spaces = 0;

int c;

int x;

if (n <= 0)
{
	_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
	{
	for (x  = 0; x < number_of_spaces; x++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	number_of_spaces++;
	}
}
}
}
