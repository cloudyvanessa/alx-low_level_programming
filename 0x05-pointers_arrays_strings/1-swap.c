#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: integer to swap
 * @b: also integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
