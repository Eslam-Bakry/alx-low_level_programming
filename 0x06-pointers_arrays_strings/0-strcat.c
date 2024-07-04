#include "main.h"

/**
 * *_strcat - check code
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 * Return: On success dest
 */

char *_strcat(char *dest, char *src)
{
char *d = dest;
const char *s = src;

while (*d != '\0')
{
	d++;
}

while (*s != '\0')
{
	*d = *s;
	d++;
	s++;
}

*d = '\0';

return (dest);
}
