#include "main.h"

/**
 * print_rev - Imprime una adena en reversa
 * @s: validacion
 * Return: cero
 */
void print_rev(char *s)
{
	int i, longitud_cadena;

	longitud_cadena = _strlen(*s);
	for (i = longitud_cadena; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
