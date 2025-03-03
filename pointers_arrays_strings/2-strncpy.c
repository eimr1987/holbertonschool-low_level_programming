#include "main.h"

/**
 * _strncpy - concatena dos strings
 * @dest: destino
 * @src: origen
 * @n: entero
 * Return: concatenacion
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int longitud_src = 0;

	while (src[i++])
	{
		longitud_src++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = longitud_src; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
