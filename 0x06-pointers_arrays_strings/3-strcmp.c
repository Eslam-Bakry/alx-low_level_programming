#include "main.h"

/**
 * _strcmp - check code
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: On success dest
 */


int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2 && *s1 != '\0')
{
	s1++;
	s2++;
}
return (*s1 - *s2);
}
