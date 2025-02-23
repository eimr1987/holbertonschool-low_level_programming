#include "main.h"

/**
 * print_last_digit - imprimir el últino digito de un número
 * @n: numero a validar
 *
 * Return: ultimo digito
 *
 */
int print_last_digit(int n)
{
	/*Obtenemos el último digito*/
	int ultimo_digito = n % 10;

	/*validamos que el número sea positivo*/
	if (ultimo_digito < 0)
		ultimo_digito = -1 * ultimo_digito;

	_putchar(ultimo_digito + '0');
	return (ultimo_digito);
}
