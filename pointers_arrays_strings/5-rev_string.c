#include "main.h"

/**
 * rev_string - Imprime un string en reversa
 * @s: validacion
 * Return: cero
 */
void rev_string(char *s)
{
	int i, longitud_cadena = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		longitud_cadena++;
	}
	for (i = longitud_cadena - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
