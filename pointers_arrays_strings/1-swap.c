#include "main.h"

/**
 * swap_int - intercambio de dos valores
 *
 * @a: validacion
 * @b: validacion
 *
 * Return: cero
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
