#include "main.h"

/**
 * *_strncpy - check code
 * @dest: where the string is going to be stored
 * @src: the string to be copied
 * @n: number of times to copy the string
 * Return: On success dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}

for (; i < n; i++)
{
	dest[i] = '\0';
}

return (dest);
}
