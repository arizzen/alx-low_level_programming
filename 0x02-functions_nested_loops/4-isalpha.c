#include "main.h"

/**
 * _isalpha - checksif character is a letter
 *  @c: letter
 *
 *  Return: 1 if successful, 0 if not
 */

int _isalpha(int c)
{
	for (c >= 'a' || c <= 'z' && c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);
}
