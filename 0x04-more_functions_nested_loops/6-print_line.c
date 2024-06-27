#include "main.h"

/**
* print_line - Entry point
* @n: the number of times the character _ should be printed
* Return: Always 0 (Success)
*/

void print_line(int n)
{

for (int c = 0; n == c; c++)
{
	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	_putchar(' ');
}
_putchar('\n');

}
