#include "main.h"

/**
* times_table - Entry point
* @n : the number to be calculated
* Return: Always 0 (Success)
*/

void times_table(n)
{
int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			int z = x * y;

			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
