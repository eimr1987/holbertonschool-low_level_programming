#include "main.h"

/**
 * puts2 - Imprime un caracter cada 2.
 * @str: validacion
 * Return: cero
 */
void puts2(char *str)
{
	int i, longitud_cadena = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		longitud_cadena++;
	}

	for (i = 0; i < longitud_cadena; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
