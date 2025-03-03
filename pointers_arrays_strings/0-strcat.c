#include "main.h"

/**
 * _strcat - concatena dos strings
 * @dest: destino
 * @src: origen
 * Return: concatenacion
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	int recorrido_en_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		recorrido_en_dest++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[recorrido_en_dest] = src[j];
		recorrido_en_dest++;
		j++;
	}
	dest[recorrido_en_dest] = '\0';

	return (dest);
}
