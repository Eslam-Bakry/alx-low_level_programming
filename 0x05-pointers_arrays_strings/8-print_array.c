#include "main.h"
/**
 * print_array - print in an array
 * @a: array name
 * @n: number of element in array
 *
 */

void print_array(int *a, int n)
{
int counter;
for (counter = 0; counter < (n - 1); counter++)
{
printf("%d, ", a[counter]);
}
if (counter == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");


}
