#include "main.h"

/**
* print_numbers - Entry point
*
* Return: Always 0 (Success)
*/

void print_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
	_putchar("0123456789"[n]);
}
_putchar('\n');

}
