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

	char tmp;

	for (i = longitud_cadena - 1; i >= longitd_cadena / 2; i--)
	{
		tmp = s[i];
		s[i] = s[longitud_cadena - i - 1];
		s[longitud_cadena - 1] = tmp;
	}
}
