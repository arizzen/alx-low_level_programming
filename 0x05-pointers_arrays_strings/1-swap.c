#include "main.h"

/**
 * swap_int - swaps the value of two numbers
 * @a: 1st number
 * @b: 2nd number
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;

}
