#include "main.h"

/**
 * _strlen - regresa la langitud de una cadena
 * @s: validacion
 * Return: longitud de cadena
 */
int _strlen(char *s)
{
	int i, longitud = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		longitud = longitud + 1;
	}
	return (longitud);
}
