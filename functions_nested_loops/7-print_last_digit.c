#include "main.h"

/**
 * print_last_digit(int) - imprimir el últino digito de un número
 *
 * @n: jijiji
 *
 * Return: ultimo digito
 *
 */
int print_last_digit(int n)
{
	int ultimo_digito = n % 10;

	if (ultimo_digito < 0)
		ultimo_digito = -1 * ultimo_digito;

	return (ultimo_digito);
}
