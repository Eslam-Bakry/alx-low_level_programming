#include "main.h"

/**
* _abs - Entry point
* @c: the number to be checked
* Return: Always 0 (Success)
*/

int _abs(int c)
{
if (c < 0)
{
int absloute_value;
absloute_value = c * -1;
return (absloute_value);
}
else
{
return (c);
}
}
