#include "main.h"

/**
 * puts_half - check code
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
int i  = 0, n, j;


while (*(str + i) != '\0')
{
	i++;
}

if (i % 2 == 0)
{
	n = i / 2;
}
else
{
	n = (i + 1) / 2;
}

for (j = n; j < i; j++)
{
	_putchar(str[j]);
}
_putchar('\n');
}
