#include "main.h"

/**
 * *_strncat - check code
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 * @n: number of letter to be concatenated
 * Return: On success dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *d = dest;
const char *s = src;
int i;


while (*d != '\0')
{
	d++;
}


for (i = 0; i < n && *s != '\0'; i++)
{
	*d = *s;
	d++;
	s++;
}


*d = '\0';

return (dest);
}
