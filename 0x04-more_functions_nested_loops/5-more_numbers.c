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
for (n = 0; n < 20; n++)
{
	_putchar("01234567891011121314"[n]);
}
_putchar('\n');
}
}
