#include "main.h"

/**
* times_table - Entry point
*
* Return: Always 0 (Success)
*/

void times_table(void)
{
int x, y;

	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			int z = x * y;

			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
