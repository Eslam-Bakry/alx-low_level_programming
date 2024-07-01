#include "main.h"

/**
 * swap_int - resets the value of an int var to 98
 * @a: number to be swapped
 * @b: number to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int placeholder;

	placeholder = a;
	a = b;
	b = placeholder;
}
