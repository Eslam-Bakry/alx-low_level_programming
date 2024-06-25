#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
int n;
int i;
for (i = 0; i <= 10; i++)
{
for (n = 0; n < 26; n++)
{
	_putchar("abcdefghijklmnopqrstuvwxyz"[n]);
}
_putchar('\n');
}
}
