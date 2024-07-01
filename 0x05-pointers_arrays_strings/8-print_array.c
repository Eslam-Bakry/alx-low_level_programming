#include "main.h"
/**
 * print_array - print in an array
 * @a: array name
 * @n: number of element in array
 *
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	if (i != 0)
	{
		_putchar(',');
		_putchar(' ');
	}
	_putchar(*(a + i));
}
_putchar('\n');
}
