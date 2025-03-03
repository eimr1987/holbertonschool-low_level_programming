#include "main.h"

/**
 * puts_half - Imprime la mitad de una cadena
 * @str: validacion
 * Return: cero
 */
void puts_half(char *str)
{
	int i, longitud_cadena = 0, n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		longitud_cadena++;
	}
	n = (longitud_cadena + 1) / 2;

	for (i = n; i < longitud_cadena; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
