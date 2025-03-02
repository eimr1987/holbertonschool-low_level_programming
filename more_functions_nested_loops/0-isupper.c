#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: variable a validar
 * Return: 1 si es mayuscula; 0 si no lo es
 */
int _isupper(int c)
{
	if  ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
