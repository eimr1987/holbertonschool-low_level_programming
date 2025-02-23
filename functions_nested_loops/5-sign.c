#include "main.h"


/**
 * _print_sign - Imprimer el signo de un numero
 *
 * @c - caracter del mal
 *
 * Return 1: y el signo + si el numero es mayor que zero
 * Return 0: imprimer 0 si el número es zero
 * Return -1: y el signo - si el numero es menor que zero
 */
int print_sign(int n)/*aqui vamos putines*/
{
	/*adsfdgdgdgdgdgdgdg gdgdgdgdgd*/
	if (n > 0) /*si es mayor que cero*/
	{
		_putchar('+');/*colocamos signo*/
		return (1); /*es positivo*/
	}
	else if (n == 0) /*si es igual a cero*/
	{
		_putchar('0'); /*imprimos un cero*/
		return (0); /*es igual a cero*/
	}
	else /*ninguno de los anteriores*/
	{
		_putchar('-');/*es negativo*/
		return (-1); /*es negativo*/
	}
}
