#include "main.h"

/**
 * reverse_array - check code
 * @a: the string to be reversed
 * @n: the number of elements of the array
 * Return: On success dest
 */

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
}
}
