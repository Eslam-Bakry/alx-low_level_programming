#include "main.h"

/**
 * _puts - resets the value of an int var to 98
 * @str: string to be printed
 *
 */

void _puts(char *str)
{
int i  = 0;

while (*(str + i) != '\0')
{
	_putchar(*(str + i));
}
_putchar('\n');
}
