#include "main.h"

/**
* _islower - Entry point
* @c: the character to be checked
* Return: Always 0 (Success)
*/

int _islower(int c)
{
if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
