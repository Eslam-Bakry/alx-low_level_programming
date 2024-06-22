#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number;
int number2;
for (number = 0; number <= 99; number++)
{
for (number2 = number + 1; number2 <= 99; number2++)
{
putchar('0' + number / 10);
putchar('0' + number % 10);
putchar(' ');
putchar('0' + number2 / 10);
putchar('0' + number2 % 10);
if (number == 98 && number2 == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
