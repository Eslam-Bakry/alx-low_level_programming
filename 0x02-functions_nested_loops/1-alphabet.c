#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n;
print_alphabet();
{
for (n = 0; n < 29; n++)
{
	_putchar("abcdefghijklmnopqrstuvwxyz"[n]);
}
_putchar('\n');
}
return (0);
}
