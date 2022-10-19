#include "main.h"

/**
 * print_alphabet_x10 - prints the alpha 10 times
 */

void print_alphabet_x10(void)
{
	char zz;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (zz = 'a'; zz <= 'z'; zz++)
			_putchar(zz);
			_putchar('\n');
	}
