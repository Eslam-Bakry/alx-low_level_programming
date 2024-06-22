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
for (number = 0; number <= 9; number++)
{
for (number2 = number + 1; number2 <= 9; number2++)
{
putchar('0' + number);
putchar('0' + number2);
if (number == 8 && number2 == 9)
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
