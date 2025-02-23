#include "main.h"


/**
 * print_sign - Imprimer el signo de un numero
 *
 * @c - caracter del mal
 *
 * Return 1: y el signo + si el numero es mayor que zero
 * Return 0: imprimer 0 si el número es zero
 * Return -1: y el signo - si el numero es menor que zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
