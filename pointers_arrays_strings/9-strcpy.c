#include "main.h"

/**
 * _strcpy - copia y pega un string
 * @dest: destino
 * @src: origen
 * Return: cero
 */
void *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
