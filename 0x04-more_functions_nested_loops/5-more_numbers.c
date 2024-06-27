#include "main.h"

/**
* more_numbers - Entry point
*
* Return: Always 0 (Success)
*/

void more_numbers(void)
{
int n;
int i;
for (i = 0; i <= 9; i++)
{
for (n = 0; n < 15; n++)
{
	_putchar("0123456789"[n]);
}
_putchar('\n');
}
}
