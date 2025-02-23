#include "main.h"


/**
 * _isalpha - funcion que retorna 1 si es es una letra, min o ma.
 *@c: identificador
 *
 * Return: 1 o 0
 *
 */
int _isalpha(int c)
{
	/* validamos que el dato sea mayus o min*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
