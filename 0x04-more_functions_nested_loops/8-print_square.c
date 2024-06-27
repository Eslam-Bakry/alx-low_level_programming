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
	int h_c;
	int w_c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h_c = 0; h_c < height; h_c++)
		{
			for (w_c = 0; w_c < width; w_c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
