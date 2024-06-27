#include "main.h"

/**
* print_most_numbers - Entry point
*
* Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
int n;

for (n = 0; n < 10; n++)
{
	if (n == 4 || n == 2)
	{
		continue;
	}
	_putchar("0123456789"[n]);
}
_putchar('\n');

}
