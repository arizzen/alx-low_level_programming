#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * @str: The string to be changed.
 * Return: pointer to changedstring
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{

		if  (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
