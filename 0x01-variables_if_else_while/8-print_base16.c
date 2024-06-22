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
char character;
int number;
for (number = 0; number <= 9; number++)
{
putchar('0' + number);
}
for (character = 'a'; character <= 'f'; character++)
{
putchar(character);
}
putchar('\n');
return (0);
}
