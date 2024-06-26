#include "main.h"

/**
* print_last_digit - Entry point
* @c: the number to be checked
* Return: Always 0 (Success)
*/

int print_last_digit(int c)
{
int lastDigit = c % 10;
_putchar('0' + lastDigit);
return (0);
}
