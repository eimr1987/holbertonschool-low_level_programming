#include "main.h"

/**
 * string_toupper - cambios
 * @str: value
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
