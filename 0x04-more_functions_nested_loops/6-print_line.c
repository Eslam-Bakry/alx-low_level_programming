#include "main.h"

/**
* print_line - Entry point
* @n: the number of times the character _ should be printed
* Return: Always 0 (Success)
*/

void print_line(int n)
{
int c;
if (n <= 0)
{
	_putchar('\n');
}
else
{
for (c = 0; n < c; c++)
{
	_putchar(95);
}
_putchar('\n');
}
}
