#include "main.h"

/**
 * _strncat - concatena dos strings
 * @dest: destino
 * @src: origen
 * @n: entero
 * Return: concatenacion
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int longitud_dest = 0;

	while (dest[i++])
	{
		longitud_dest++;
	}
	for (i = 0; src[i] && index < n; i++)
	{
		dest[longitud_dest++] = src[i];
	}
	return (dest);
}
