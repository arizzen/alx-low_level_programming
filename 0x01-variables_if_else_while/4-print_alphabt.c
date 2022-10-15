#include <stdio.h>

/**
 * main - prints alpha in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
		putchar('\n');

		return (0);

	}
