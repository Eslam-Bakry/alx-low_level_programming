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
int number3;
for (number = 0; number <= 9; number++)
{
for (number2 = number + 1; number2 <= 9; number2++)
{
for (number3 = number2 + 1; number3 <= 9; number3++)
{
putchar('0' + number);
putchar('0' + number2);
putchar('0' + number3);
if (number == 7 && number2 == 8 && number3 == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
