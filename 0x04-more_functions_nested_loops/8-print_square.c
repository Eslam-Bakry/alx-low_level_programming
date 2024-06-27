#include "main.h"

/**
* print_square - Entry point
* @size: size of the square
* Return: Always 0 (Success)
*/
void print_square(int size)
{
	int height = size;
	int width = size;
	int height_counter;
	int width_counter;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height_counter; height_counter < height; height_counter++)
		{
			for (width_counter; width_counter < width; width_counter++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
