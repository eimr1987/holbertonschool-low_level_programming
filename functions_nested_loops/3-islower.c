#include "main.h"


/**
 * _islower - funcion que nos dice si es minuscula
 * @c: esto me quitó tiempo
 * Return: 1 minuscula, 0 en caso contrario
 *
 */
int _islower(int c)
{
	/*Mediante ascii sabremos si es minuscula*/
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* si es minuscula*/
	}
	else
	{
		return (0); /*no es minuscula*/
	}
}
