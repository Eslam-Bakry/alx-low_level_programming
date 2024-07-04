#include "main.h"

/**
 * *cap_string - check code
 * @str: string to be checked
 * Return: On success str
 */

char *cap_string(char *str)
{
int capitalize_next = 1;
char *ptr = str;

while (*ptr != '\0')
{
	if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
	{
		*ptr -= 32;
		capitalize_next = 0;
	}
	else if
	(
	*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
	*ptr == ',' || *ptr == ';' || *ptr == '.' ||
	*ptr == '!' || *ptr == '?' || *ptr == '"' ||
	*ptr == '(' || *ptr == ')' || *ptr == '{' ||
	*ptr == '}'
	)
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		ptr++;
	}

	return (str);
}
