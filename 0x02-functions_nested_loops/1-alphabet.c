#include "main.h"

/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
int n;
{
for (n = 0; n < 29; n++)
{
	_putchar("abcdefghijklmnopqrstuvwxyz"[n]);
}
_putchar('\n');
}
return (0);
}
