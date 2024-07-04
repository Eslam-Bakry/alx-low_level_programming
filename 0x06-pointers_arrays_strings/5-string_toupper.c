#include "main.h"

/**
 * *string_toupper - check code
 * @str: string to be changed
 * Return: On success str
 */

char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - 32;
	}
	ptr++;
}

return (str);
}
