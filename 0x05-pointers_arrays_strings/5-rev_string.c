#include "main.h"

/**
 * rev_string - check code
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
int i  = 0;
int j = 0;

while (*(s + i) != '\0')
{
	i++;
}

char temp[i];

while (i--)
{
	temp[j] = s[i];
	j++;
}

while (j--)
{
	s[j] = temp[j];
}

_putchar('\n');
}
