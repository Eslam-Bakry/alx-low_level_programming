#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - print all natural number from number to 98
 * @number: the number to start printing from
 * return: always 0.
 */

void print_to_98(int number)
{
if (number <= 98)
{
	for (; number <= 98 ; number++)
	{
		if (number == 98)
	{
		printf("%d", number);
		printf("\n");
		break;
	}
	else
	{
printf("%d, ", number);

	}
	}
}
else
{
	for (; number >= 98 ; number--)
	{
		if (number == 98)
		{
		printf("%d", number);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", number);
	}
}

}
}
