#include "main.h"

/**
 * print_rev - Imprime una adena en reversa
 * @s: validacion
 * Return: cero
 */
void print_rev(char *s)
{
	int i, longitud_cadena = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		longitud_cadena++;
	}
	for (i = longitud_cadena; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
