#include "main.h"

/**
* print_triangle - Entry point
* @size: size of the triangle
* Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int counter1, counter2, counter3;
	int spaces = size;
	int hashs = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (counter1 = 0; counter1 < size; counter1++)
	{
		for (counter2 = size - counter1; counter2 > 1; counter2--)
		{
			_putchar(' ');
		}
		for (counter3 = 0; counter3 <= counter1; counter3++)
		{
			_putchar('#');
		}
	}
	}
}
