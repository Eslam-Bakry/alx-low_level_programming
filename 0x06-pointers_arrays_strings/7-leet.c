#include "main.h"

/**
 * *leet - check code
 * @str: string to be checked
 * Return: On success str
 */

char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";
	int i;

	while (*ptr)
	{
		i = 0;
		while (i < 10)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replace[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}
